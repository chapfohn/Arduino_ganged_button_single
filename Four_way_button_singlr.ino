/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
As modified by Colin Chapman [ChapLab]
 
 */

const int buttonA = 1;                               // the number of the pushbutton pin
const int buttonB = 2;                               // the number of the pushbutton pin
const int buttonC = 3;                               // the number of the pushbutton pin
const int buttonD = 4;                               // the number of the pushbutton pin

const int ledRED =  10;                              // the number of the LED pin, output
const int ledGREEN =  11;                            // the number of the LED pin, output
const int ledYELLOW =  12;                           // the number of the LED pin, output
const int ledBLUE =  13;                             // the number of the LED pin, output

int buttonAstate = 0;                                // variable for reading the pushbutton status, initalised to zero
int buttonBstate = 0;                                // variable for reading the pushbutton status, initalised to zero
int buttonCstate = 0;                                // variable for reading the pushbutton status, initalised to zero
int buttonDstate = 0;                                // variable for reading the pushbutton status, initalised to zero

void setup() {
  pinMode(ledRED, OUTPUT);                           // set as output
  pinMode(ledGREEN, OUTPUT);                         // set as output
  pinMode(ledYELLOW, OUTPUT);                        // set as output
  pinMode(ledBLUE, OUTPUT);                          // set as output
  
  pinMode(buttonA, INPUT);                           // set as input
  pinMode(buttonB, INPUT);                           // set as input
  pinMode(buttonC, INPUT);                           // set as input
  pinMode(buttonD, INPUT);                           // set as input
}

void loop(){
  buttonAstate = digitalRead(buttonA);                // read the state of the pushbuttons
  buttonBstate = digitalRead(buttonB);                // read the state of the pushbuttons
  buttonCstate = digitalRead(buttonC);                // read the state of the pushbuttons
  buttonDstate = digitalRead(buttonD);                // read the state of the pushbuttons

  if (buttonAstate == HIGH || buttonBstate == LOW || buttonCstate == LOW || buttonDstate == LOW) {       // check button A state is exclusive HIGH; HIGH is pressed   
     
    digitalWrite(ledRED, HIGH);                                                                          // this can be used to set motors and/or servo sequences
  } 
  else if (buttonAstate == LOW && buttonBstate == HIGH && buttonCstate == LOW && buttonDstate == LOW) {  // check button B state is exclusive HIGH; HIGH is pressed 
    
    digitalWrite(ledGREEN, HIGH);                                                                        // this can be used to set motors and/or servo sequences
  }
  else if (buttonAstate == LOW && buttonBstate == LOW && buttonCstate == HIGH && buttonDstate == LOW) {  // check button C state is exclusive HIGH; HIGH is pressed 
  
    digitalWrite(ledYELLOW, HIGH);                                                                       // this can be used to set motors and/or servo sequences
  }  
  else if (buttonAstate == LOW && buttonBstate == LOW && buttonCstate == LOW && buttonDstate == HIGH) {  // check button D state is exclusive HIGH; HIGH is pressed 
  
    digitalWrite(ledBLUE, HIGH);                                                                         // this can be used to set motors and/or servo sequences
  }
}
