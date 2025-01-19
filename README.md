arduino-uno-memory
==================
```
Sketch uses 2154 bytes (6%) of program storage space. Maximum is 32256 bytes.
Global variables use 206 bytes (10%) of dynamic memory, leaving 1842 bytes for local variables. Maximum is 2048 bytes.
```
### Tutorials
- [**You know you have a memory problem when... | Memories of an Arduino | Adafruit Learning System**](https://learn.adafruit.com/memories-of-an-arduino?view=all)
- [Measuring Memory Usage | Memories of an Arduino | Adafruit Learning System](https://learn.adafruit.com/memories-of-an-arduino/measuring-free-memory)

### Libraries
- [mpflaga/Arduino-MemoryFree: basic functions and example to use show used RAM and use less of it.](https://github.com/mpflaga/Arduino-MemoryFree)
- [yokoyama-flogics/arduino_heap_visualizer: Visualize Arduino (Uno) heap and stack utilization](https://github.com/yokoyama-flogics/arduino_heap_visualizer)

### How to burn
- ```cmd
  arduino-cli upload -p COM18 --fqbn -v arduino:avr:uno C:/Users/user.name/Documents/Arduino/cli_test
  ```
