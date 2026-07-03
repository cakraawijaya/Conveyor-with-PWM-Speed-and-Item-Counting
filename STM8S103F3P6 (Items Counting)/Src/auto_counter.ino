// library initialization for controlling the 16x2 I2C LCD module
#include <LiquidCrystal_I2C.h>

// global variable initialization
#define ldrPin PD2       // PD2 pin to LDR sensor
#define laserPin PD3     // PD3 pin to laser module
#define pbPin PD4        // PD4 pin to push button
#define LCD_ADDR 0x27    // I2C address of the LCD module

int counter = 0;         // initialize the item counter into integer data type
int currentState = 0;    // initialize the current state of the LDR sensor
int previousState = 0;   // initialize the previous state of the LDR sensor
int ldr = 0;             // initialize the digital reading of the LDR sensor
bool pushbutton = false; // initialize the status of the push button into boolean data type

LiquidCrystal_I2C(lcd, 0x27, 16, 2); // initialize the 16x2 I2C LCD module

// Method: setup
void setup() {
  Serial_begin(9600);    // initialize serial communication at 9600 baud rate
  device_init();         // calling the device initialization method
}

// Method: loop
void loop() {
  sensor();              // calling the sensor method
  reset();               // calling the reset method
  display();             // calling the display method
}

// Method: device_init
void device_init() {
  pinMode(pbPin,INPUT);           // PD4 pin is used as an input
  pinMode(ldrPin,INPUT);          // PD2 pin is used as an input
  pinMode(laserPin,OUTPUT);       // PD3 pin is used as an output
  digitalWrite(laserPin,HIGH);    // turn on the laser module
  lcd_begin();                    // initialize the LCD module
  lcd_backlight();                // enable the LCD backlight
}

// Method: sensor
void sensor() { 
  ldr = digitalRead(ldrPin);      // digital readout of the LDR sensor
  if (ldr == LOW) {               // if the laser beam is detected then:
    currentState = 0;             // set the current sensor state to LOW
  }
  if (ldr == HIGH) {              // if the laser beam is interrupted then:
    currentState = 1;             // set the current sensor state to HIGH
  }  
  Serial_print_s("\nTotal items\t: "); // display the item count label on the serial monitor
  if (currentState == 1 && currentState != previousState) { // if a new object is detected then:
    counter = counter + 1;        // increment the item counter
    Serial_print_i(counter-1);    // display the current item count
  }
  else { // if no new object is detected then:
    Serial_print_i(counter-1);    // display the previous item count
  }
  delay(1000);                    // delay -> 1 second
}

// Method: reset
void reset() {
  pushbutton = digitalRead(pbPin); // digital readout of the push button
  if (previousState != 0 && pushbutton == HIGH) { // if the reset button is pressed then:
    counter = 1;                  // reset the counter value
    pushbutton == true;           // keep the push button status
  }
}

// Method: display
void display() {
  lcd_setCursor(2, 0);            // set the cursor position on the first row
  lcd_print_s("Total items:");    // display the title on the LCD
  lcd_setCursor(7, 1);            // set the cursor position on the second row
  lcd_print_i(counter);           // display the current item count
}
