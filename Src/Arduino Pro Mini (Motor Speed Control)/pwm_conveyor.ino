// global variable initialization
#define PB1_PIN PD4 // PD2 pin to push button 1
#define ENA_PIN PD3 // PD3 pin to enable motor A
#define PB2_PIN PD2 // PD4 pin to push button 2
#define IN1_PIN PD5 // PD5 pin to rotate the motor backward
#define IN2_PIN PD6 // PD6 pin to rotate the motor forward
#define PTM_PIN PC0 // PC0 pin to potentiometer

// initialize the status of digital readings on push buttons 1 and 2 into boolean data type
boolean state1 = false, state2 = false;

// initialize the analog reading on potentiometer into integer data type
int pot = 0;

// Method: setup
void setup() {
  pinMode(PB1_PIN, INPUT_PULLUP);     // PD2 pin is used as an input
  pinMode(ENA_PIN, OUTPUT);           // PD3 pin is used as an output
  pinMode(PB2_PIN, INPUT_PULLUP);     // PD4 pin is used as an input
  pinMode(IN1_PIN, OUTPUT);           // PD5 pin is used as an output
  pinMode(IN2_PIN, OUTPUT);           // PD6 pin is used as an output
  Serial.begin(9600);                 // start serial communication at a baud rate of 9600
}

// Method: loop
void loop() {

  // motor speed control with PWM
  pot = map(analogRead(PTM_PIN), 0, 1023, 0, 255);
  analogWrite(ENA_PIN, pot);

  // displaying the PWM value of a potentiometer on the serial monitor
  Serial.println("-----------------------------------");
  Serial.print("\nPot PWM : ");
  Serial.println(pot);
  Serial.println();

  forward();    // calling the forward method
  reverse();    // calling the reverse method
  delay(1000);  // delay -> 1 second
}

// Method: forward
void forward(){

  // digital readout of button 1
  state1 = digitalRead(PB1_PIN);

  // displaying the status of push button 1 on the serial monitor
  Serial.println("-----------------------------------");
  Serial.print("\nPB1 : ");
  Serial.println(state1 == LOW ? "PRESSED" : "RELEASED");

  // displaying the current logic state of IN2 pin on the serial monitor
  Serial.print("IN2 State : ");
  Serial.println(digitalRead(IN2_PIN));
  Serial.println();

  // if button 1 is pressed when the motor is off then:
  if (digitalRead(IN2_PIN) == LOW && state1 == LOW){

    // displaying the motor direction (forward) on the serial monitor
    Serial.println("Status ==> FORWARD\n");

    // motor rotation will be clockwise
    digitalWrite(IN1_PIN, LOW);
    digitalWrite(IN2_PIN, HIGH);
    state1 = true;
  }

  // if button 1 is pressed while the motor is running then:
  else if (digitalRead(IN2_PIN) == HIGH && state1 == LOW){

    // displaying the stop command after forward operation
    Serial.println("Status ==> STOP FROM FORWARD\n");

    // the motor will be shut down as soon as possible
    digitalWrite(IN1_PIN, LOW);
    digitalWrite(IN2_PIN, LOW);
    state1 = true;
  }
}

// Method: reverse
void reverse(){

  // digital readout of button 2
  state2 = digitalRead(PB2_PIN);

  // displaying the status of push button 2 on the serial monitor
  Serial.println("-----------------------------------");
  Serial.print("\nPB2 : ");
  Serial.println(state2 == LOW ? "PRESSED" : "RELEASED");

  // displaying the current logic state of IN1 pin on the serial monitor
  Serial.print("IN1 State : ");
  Serial.println(digitalRead(IN1_PIN));
  Serial.println();

  // if button 2 is pressed when the motor is off then:
  if (digitalRead(IN1_PIN) == LOW && state2 == LOW) {

    // displaying the motor direction (reverse) on the serial monitor
    Serial.println("Status ==> REVERSE\n");
 
    // motor rotation will be counterclockwise
    digitalWrite(IN1_PIN, HIGH);
    digitalWrite(IN2_PIN, LOW);
    state2 = true;
  }

  // if button 2 is pressed while the motor is running then:
  else if (digitalRead(IN1_PIN) == HIGH && state2 == LOW){

    // displaying the stop command after reverse operation
    Serial.println("Status ==> STOP FROM REVERSE\n");

    // the motor will be shut down as soon as possible
    digitalWrite(IN1_PIN, LOW);
    digitalWrite(IN2_PIN, LOW);
    state2 = true;
  }
}
