IBM Model M 122 to USB converter
================================
Introduction
------------
   This project uses Raspberry PI pico and USBHID library to read scancodes from keyboard, and then convert them into usb keycodes and send them to computer.

<div style="color:red">
  <strong>
  <h2 style="color:red">Important</h2>
  
  <p style="color:red">
    You need to paste "#define US_KEYBOARD" into USBKeyboard.cpp.<br>
    This project was written in C++ in Arduino IDE with added module for PI pico support.  
  </p>
  </strong>
</div>

Wiring
------
  From keyboard to PI pico:
  * 1(VCC) to VBUS
  * 2(DATA) to GP2 via 10k ohm ressistor
  * 3 N/C
  * 4(GND) to GND
  * 5 N/C
  * 6(CLOCK) to GP3 via 10k ohm ressistor

![Keyboard pinout](https://github.com/user-attachments/assets/6e907bd1-6ec6-4f51-abbb-474994d40d0c)

Files
-----
1. **Keycodes.h** contains array of USB keycodes indexed by PS/2 scanset3 codes
2. **Queue.h/Queue.cpp** is a class that implements a queue style data structure
3. **PS2.h** is a class taht reads codes fromkeyboard
4. **ModelM122toUSB.ino** is a main file where we read codes,then convert them and send them to PC

Mapping
-------
  
![ub40t56_raw3](https://github.com/user-attachments/assets/d5b96530-0be6-4bd2-ba74-77a7f7f9fccd)
<em style="display:center">Picture of keyboard with all corespoding scanset3 codes</em>

Grey keys are the release sensitive keys when they are pressed keyboard sends their codes but when they are released keyboard sends first 0xF0 and then their codes.  
WKeys on the left and function keys are registered only onece on pressdown.

