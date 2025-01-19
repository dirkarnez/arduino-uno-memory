char * buffer = NULL;

#ifdef __arm__
  #include <uinstd.h>
  // should use uinstd.h to define sbrk but Due causes a conflict
  extern "C" char* sbrk(int incr);
#else  // __arm__
  extern char *__brkval;
#endif  // __arm__

int freeMemory() {
  char top;
#ifdef __arm__
  return &top - reinterpret_cast<char*>(sbrk(0));
#elif defined(CORE_TEENSY) || (ARDUINO > 103 && ARDUINO != 151)
  return &top - __brkval;
#else  // __arm__
  return __brkval ? &top - __brkval : &top - __malloc_heap_start;
#endif  // __arm__
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // sizeof(char) is 1
  buffer = (char *) malloc(1601 * sizeof(char)); // fails around 16xx to 17xx 
  if (!buffer) {
    Serial.println("ERROR");
  } else {
    buffer[0] = 'h';
    buffer[1] = 'i';
  }
}

void loop() {
  if (!buffer) {
    Serial.println("ERROR");
  } else {
    Serial.println(buffer[0]);
  }
  Serial.println( freeMemory()); // prints 2xx when buffer is malloc'ed 16xx
}

// there is no cleanup function in arduino
// void cleanup() {
//   free(buffer);
// }
