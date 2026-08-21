[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Conveyor-with-PWM-Speed-and-Item-Counting?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Arduino%20&%20STM8-light.svg?style=flat&logo=STMicroelectronics&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-EW%20Project%20Challenge%202026-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Conveyor with PWM Speed and Item Counting
This project combines a mini conveyor with an automatic item counting system. The system consists of two microcontroller boards (Arduino Pro Mini and STM8S103F3P6), each of which operates independently yet complements the other. The Arduino Pro Mini is responsible for controlling the conveyor motor, including adjusting the motor’s speed and rotation direction. The STM8S103F3P6 functions as an automatic item-counting module that displays the count locally via an I2C LCD.

The conveyor speed is adjusted using a potentiometer, while the motor’s rotation direction is controlled via a push button. Item counting is performed using a laser and an LDR sensor. When an item blocks the laser beam, the system detects it and increments the count, which is then displayed on the LCD. This project is expected to serve as a simple and affordable automation solution to improve efficiency and reduce errors in item counting, while also serving as a learning tool for motor control, sensors, and embedded systems that can be further developed for industrial automation needs.

<br><br>

## Project Requirements
| Part | Description |
| --- | --- |
| Development Board | • Arduino Pro Mini<br>• STM8S103F3P6 |
| Code Editor | Arduino IDE 1.8.19 (Stable Legacy Version) |
| Programmer Tools | • PL2303 USB<br>• FTDI USB (PL2303 USB Alternative)<br>• ST-Link/V2 |
| Serial Communication Tools | FTDI USB |
| Driver | • PL2303 USB Driver<br>• ST-Link USB Driver<br>• CDM FTDI USB Driver |
| Communications Protocol | Inter Integrated Circuit (I2C) |
| Programming Language | C/C++ |
| Arduino Library | LiquidCrystal_I2C (default) |
| Actuator | Gear Motor / Motor DC (x1) |
| Sensor | • LDR Sensor Module (x1)<br>• KY-008: Laser Transmitter Module 5V (x1) |
| Display | LCD I2C (x1) |
| Other Components | • Mini USB cable - USB type A (x1)<br>• Socket female jack DC (x1)<br>• Micro USB cable - 2 pin JST (x1)<br>• Jumper cable (1 set)<br>• PCB Dot Matrix Single Layer 10cm x 22cm (x1)<br>• Adaptor DC 5V 2A (x1)<br>• Adaptor DC 12V 2A (x1)<br>• Motor driver L298N (x1)<br>• Potentiometer (x1)<br>• Push button 12 x 12 mm (x3)<br>• PVC Sheets 3 mm 10 x 50 cm (x5)<br>• Stainless Steel Concrete 30 cm (x1)<br>• Bearing Pillow Block 6 mm (x3)<br>• 1/2 Inch Pipe 25 cm (x1)<br>• Oscar fabric 50 x 137 cm (x1)<br>• Wood stickers (x2)<br>• L Bracket (x24)<br>• PVC Electrical insulation (x3)<br>• Sandpaper G-180 1 m (x1)<br>• Smart Car Rims (x1)<br>• Hexagonal Spacer Female to Female M3 x 12 (x4)<br>• Hexagonal Spacer Female to Male M3 x 20 (x4)<br>• Bolts M3 x 8 (x8)<br>• Bolts M3 x 20 (x12)<br>• Bolts M3 x 30 (x2)<br>• Bolts M5 x 25 (x8)<br>• Bolts M5 x 20 (x32)<br>• Nuts M3 (x14)<br>• Nuts M5 (x40)<br>• Header Pin Female Single Row 1x40 (x2)<br>• Header Pin Male Double Row 2x40 (x2)<br>• Header Pin Female Double Row 2x40 (x2) |

<br><br>

## Download & Install
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://bit.ly/ArduinoIDE_Installer
   ```

   </td></tr></table><br>

2. PL2303 USB Driver

   <table><tr><td width="810">
   
   ```
   https://bit.ly/PL2303P_USBdriver
   ```

   </td></tr></table><br>

3. ST-Link USB Driver

   <table><tr><td width="810">
   
   ```
   https://bit.ly/STLink_USBdriver
   ```

   </td></tr></table><br>
   
4. CDM FTDI USB Driver

   <table><tr><td width="810">
   
   ```
   https://bit.ly/CDM_FTDI_USBdriver
   ```

   </td></tr></table>
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>

<br><br>

## PL2303 USB & Arduino Pro Mini Configuration
<img width="840" src="Assets/Documentation/Diagram/Arduino Pro Mini with PL2303.jpg" alt="pl2303-arduino-pro-mini-configuration"><br><br>

<h3><img src="https://github.com/user-attachments/assets/932b96eb-cbc7-42f1-8938-43cb431889a5" width="16" height="16"> Notes :</h3>
<blockquote>
   <ul>
   <li>
   
   This ``` Arduino Pro Mini ``` is not equipped with a ``` USB port ```, so you need an additional device in the form of a ``` USB to TTL Serial ``` to connect to a laptop or PC. ``` USB to TTL Serial ``` like the ``` PL2303 USB ``` is commonly used as an intermediate medium for uploading programs.
   
   </li>
   <li>
   
   You can see the wiring between the ``` PL2303 USB ``` and the ``` Arduino Pro Mini ``` board in detail in the picture above.
   
   </li>
   <li>
   
   To upload a program, in addition to using the ``` PL2303 USB ```, you can also use other programming tools such as: ``` CP2102 USB ```, ``` CH340 USB ```, or with ``` FTDI USB ```. Based on experience, I admit that using ``` FTDI USB ``` or ``` CP2102 USB ``` is much better than ``` PL2303 USB ``` or ``` CH340 USB ```. I recommend this alternative method because I have frequently experienced upload failures when using a ``` USB PL2303 ```. This usually happens when the manual reset is not timed correctly with the upload process. An example of the error is shown below.
   
   </li>
   
   <img width="810" height="250" src="Assets/Documentation/Experiment/Arduino Pro Mini Upload Failed.jpg" alt="upload-failed">
   </ul>
</blockquote>

<br><br>

## FTDI USB & Arduino Pro Mini Configuration (Alternative Method)
<img width="840" src="Assets/Documentation/Diagram/Arduino Pro Mini with FTDI (Alternative).jpg" alt="ftdi-arduino-pro-mini-configuration"><br><br>

<h3><img src="https://github.com/user-attachments/assets/932b96eb-cbc7-42f1-8938-43cb431889a5" width="16" height="16"> Notes :</h3>
<blockquote>
   <ul>
   <li>
   
   You can see the wiring between the ``` FTDI USB ``` and the ``` Arduino Pro Mini ``` board in detail in the picture above.
   
   </li>
   <li>
   
   Uploading a program using an ``` FTDI USB ``` is generally easier and more reliable because it can automatically reset the ``` Arduino Pro Mini ``` through the ``` DTR ``` pin. This means you no longer need to press the ``` Reset ``` button manually every time you upload a program.
   
   </li>
   <li>
   
   If you do not have an ``` FTDI USB ```, you can use a ``` CP2102 USB ``` instead, as the setup is nearly identical.
   
   </li>
   </ul>
</blockquote>

<br><br>

## ST-Link/V2 & STM8S103F3P6 Configuration
<img width="840" src="Assets/Documentation/Diagram/STM8S103F3P6 with ST-Link V2.jpg" alt="stlink-stm8s103f3p6-configuration"><br><br>

<h3><img src="https://github.com/user-attachments/assets/932b96eb-cbc7-42f1-8938-43cb431889a5" width="16" height="16"> Notes :</h3>
<blockquote>
   <ul>
   <li>
   
   The single wire interface module or ``` SWIM ``` is basically used to communicate with the ``` STM8 ``` board.

   </li>
   <li>
   
   You can see the wiring between the ``` ST-Link/V2 ``` and the ``` STM8S103F3P6 ``` board in detail in the picture above.
   
   </li>
   <li>
   
   Based on personal experience, the ``` STM8 ``` can only be programmed with ``` ST-Link ```.
   
   </li>
   </ul>
</blockquote>

<br><br>

## Removing write protection on STM8S103F3P6
The write protection on the ``` STM8S103F3P6 ``` board can be removed through several steps, among others :<br><br>
1. Connect the ``` STM8S103F3P6 ``` board to the ``` ST-Link/V2 ```, then connect the ``` ST-Link/V2 ``` to a PC or laptop.<br><br>

2. Open ``` CMD (Command Prompt) ```.<br><br>

3. Enter into the directory :

   <table><tr><td width="810">

   ``` C:\Users\[Computer Name]\AppData\Local\Arduino15\packages\sduino\tools\STM8Tools\2019.02.05\win ```

   </td></tr></table><br>

4. Input the command :

   <table><tr><td width="810">
   
   ```
   stm8flash -cstlinkv2 -pstm8s103?3 -u
   ```

   </td></tr></table><br>
   
5. Press ``` Enter ```, then you can see the result as the picture below.
   
   <img width="810" height="250" src="Assets/Documentation/Experiment/Remove Protection STM8.jpg" alt="stm8-rmv-protection">

<br><br>

## Scanning the I2C Address on the LCD (STM8S103F3P6)
<table><tr><td width="840">

```ino
/*
  =====================================================
  I2C Scanner for STM8S103F3P6
  by: Devan Cakra Mudra Wijaya, S.Kom.
  =====================================================

  Functions:
  - Detects all connected I2C devices
  - Displays device addresses in HEX format
  - Displays the total number of detected devices


  =====================================================
  SDA and SCL Pins for STM8S103F3P6
  =====================================================
  SDA -> PB5
  SCL -> PB4
*/

// Include the I2C library for I2C communication
#include "I2C.h"

// Constant that defines the delay between scans (5000 ms = 5 seconds)
const uint16_t SCAN_INTERVAL = 5000;


// The setup() function runs once when the board is powered on or reset
// It is used to initialize hardware, serial communication, sensors, modules, and the program's initial configuration
void setup() {

  // Start Serial communication at 9600 baud rate
  Serial_begin(9600);

  // Wait for 5 seconds before starting the program
  delay(5000);

  // Display program header
  Serial_println_s("====================================");
  Serial_println_s("         I2C DEVICE SCANNER         ");
  Serial_println_s("by: Devan Cakra Mudra Wijaya, S.Kom.");
  Serial_println_s("====================================");

  // Print an empty line
  Serial_println_s("");

  // Initialize I2C communication
  I2C_begin();
}


// The loop() function runs continuously after setup() has finished
// The main program logic is typically placed inside this function
void loop() {

  // Variable to store the error code returned from I2C communication
  uint8_t error;

  // Variable to store the I2C address currently being checked
  uint8_t address;

  // Counter variable for the number of detected devices
  uint8_t deviceCount = 0;

  // Display information indicating that the scan process has started
  Serial_println_s("------------------------------------");
  Serial_println_s("Scanning I2C bus...");
  Serial_println_s("------------------------------------");

  // Loop through addresses from 1 to 126
  // Valid I2C addresses range from 0x01 to 0x7E
  for (address = 1; address < 127; address++) {

    // Perform I2C write transaction (STM8 I2C driver)
    // Used to test ACK response from device
    // Error code depends on I2C driver implementation
    error = I2C_write(address, 0x00);

    // If no error occurs:
    if (error == 0) {

      // Display information that a device was found
      Serial_print_s("[FOUND] Device at address 0x");

      // If the address is less than 16:
      // Add a leading zero to keep HEX formatting aligned
      if (address < 16) {
        Serial_print_s("0");
      }

      // Display the address in HEX format
      Serial_print_ub(address, HEX);
      Serial_println_s("");

      // Increment the detected device count
      deviceCount++;
    }

    // If an unknown error occurs:
    else if (error == 4) {

      // Display an error message
      Serial_print_s("[ERROR] Unknown error at address 0x");

      // If the address is less than 16:
      // Add a leading zero to keep HEX formatting aligned
      if (address < 16) {
        Serial_print_s("0");
      }

      // Display the problematic address in HEX format
      Serial_print_ub(address, HEX);
      Serial_println_s("");
    }

    // If the error is neither 0 nor 4:
    // Ignore it, as this usually means no device exists at that address
  }

  // Print an empty line
  Serial_println_s("");

  // If no devices were found:
  if (deviceCount == 0) {

    // Display a message indicating that no devices were found
    Serial_println_s("No I2C devices found.");
  }
  else { // If at least one device was found:

    // Display the total number of detected devices
    Serial_print_s("Total devices found: ");

    // Display the value of deviceCount
    Serial_print_ub(deviceCount, DEC);
    Serial_println_s("");
  }

  // Display information about the next scan
  Serial_print_s("Next scan in ");

  // Convert milliseconds to seconds
  Serial_print_ub(SCAN_INTERVAL / 1000, DEC);

  // Display the unit in seconds
  Serial_println_s(" seconds.");

  // Empty line
  Serial_println_s("\n");

  // Wait 5 seconds before performing the next scan
  delay(SCAN_INTERVAL);
}
```

</td></tr></table><br><br>

## FTDI USB & STM8S103F3P6 Configuration
<img width="840" src="Assets/Documentation/Diagram/STM8S103F3P6 with FTDI.jpg" alt="ftdi-stm8s103f3p6-configuration"><br><br>

<h3><img src="https://github.com/user-attachments/assets/932b96eb-cbc7-42f1-8938-43cb431889a5" width="16" height="16"> Notes :</h3>
<blockquote>
   <ul>
   <li>
   
   Serial communication on this ``` STM8S103F3P6 ``` board is very possible, especially for ``` Serial Monitor ``` and ``` Serial Plotter ``` purposes. Tools that can be used for serial communication include: ``` CP2102 USB ```, ``` CH340 USB ```, ``` FTDI USB ```, or with ``` PL2303 USB ```.

   </li>
   <li>
   
   You can see the wiring between the ``` FTDI USB ``` and the ``` STM8S103F3P6 ``` board in detail in the picture above.
   
   </li>
   </ul>
</blockquote>

<br><br>

## Arduino IDE Setup
1. Open the ``` Arduino IDE ``` first, then open the project by clicking ``` File ``` -> ``` Open ``` :

   <table><tr><td width="810">
   
      • ``` pwm_conveyor.ino ```
      
      • ``` auto_counter.ino ```

   </td></tr></table><br>
   
2. Fill in the ``` Additional Board Manager URLs ``` in Arduino IDE

   <table><tr><td width="810">
      
      Click ``` File ``` -> ``` Preferences ``` -> enter the ``` Boards Manager Url ``` by copying the following link :
   
      ```
      https://raw.githubusercontent.com/tenbaht/sduino/master/package_sduino_stm8_index.json
      ```

   </td></tr></table><br>
   
3. ``` Board Setup ``` in Arduino IDE

   <table>
      <tr><th>
         
      i
         
      </th><th width="780">
            
      How to setup the ``` Arduino Pro Mini ``` board
   
      </th></tr>
      <tr><td colspan="2" width="780">

      Select a board by clicking: ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Pro or Pro Mini ```.
              
      </td></tr>
   </table><br><table>
      <tr><th>
         
      ii
         
      </th><th width="775">

      How to setup the ``` STM8S103F3P6 ``` board
            
      </th></tr>
      <tr><td colspan="2" width="775">

      • Click ``` Tools ``` section -> ``` Board ``` -> ``` Boards Manager ``` -> Install ``` Sduino STM8 plain C core (non-C++) ```.

      • Then selecting a board by clicking: ``` Tools ``` -> ``` Board ``` -> ``` STM8S Boards ``` -> ``` STM8S103F3 Breakout Board ```.
            
      </td></tr>
   </table><br>
   
4. ``` Change Processor ``` in Arduino IDE for the Arduino Pro Mini board (choose according to the type)

   <table><tr><td width="810">
   
      Click ``` Tools ``` -> ``` Processor ``` -> ``` ATmega328P (5V, 16 MHz) ```

   </td></tr></table><br>

5. ``` Port Setup ``` in Arduino IDE for the Arduino Pro Mini board

   <table><tr><td width="810">
   
      Click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```

   </td></tr></table><br>

6. ``` Change Programmer ``` in Arduino IDE for the STM8S103F3P6 board

   <table><tr><td width="810">
      
   Click ``` Tools ``` -> ``` Programmer ``` -> ``` ST-Link/V2 ```

   </td></tr></table><br>
   
7. Before uploading the program, please click: ``` Verify ```.<br><br>

8. If there is no error in the program code, the next step is to use the programming tool according to the procedure.

   <table><tr><td width="810">

      • The ``` Arduino Pro Mini ``` uses a -> ``` USB PL2303 ``` or ``` USB FTDI ```.

      • The ``` STM8S103F3P6 ``` uses an -> ``` ST-Link/V2 ```.
            
   </td></tr></table>
   
   Then click: ``` Upload ``` to upload the program code.<br><br>

9. Some things you need to do when using the ``` Arduino Pro Mini board ``` with ``` PL2303 USB ``` :

   <table><tr><td width="810">

      • ``` Arduino IDE ``` information: ``` Uploading... ``` -> immediately press the ``` RESET ``` button and release it.
      
      • Wait until the message appears: ``` Done Uploading ``` -> ``` The program is directly operated ```.

   </td></tr></table><br>

10. If there is still a problem when uploading the program, then try checking the ``` driver ``` / ``` port ``` / ``` programmer tool ``` / ``` others ``` section.

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
    
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
      
4. Configure your device according to the settings above.<br><br> 
 
5. Please enjoy [Done].

<br><br>

## Highlights
<img width="840" src="Assets/Documentation/Experiment/Conveyor.jpg" alt="conveyor">

<br><br>

## Appreciation
If this work is useful to you, then support this work as a form of appreciation to the author by clicking the ``` ⭐Star ``` button at the top of the repository.

<br><br>

## Disclaimer
This application is my own work and is not the result of plagiarism from other people's research or work, except those related to third party services which include: libraries, frameworks, and so on.