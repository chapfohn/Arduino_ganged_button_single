/*
  Button
 
 Turns on Red LED connected to digital  
 pin 10, when pressing any pushbutton attached to pins 1, 2, 3, or 4. 
 
 Turns on Blue LED connected to digital 
 pin 13, when NOT pressing any pushbutton attached to pins 1, 2, 3, or 4. 
 
 
 The circuit:
 * LEDs attached from pins 10, 11, 12 and 13 to ground 
 * momentary pushbuttons attached to pins 1, 2, 3 and 4 from +5V
 * 10K resistor attached to pins 1, 2, 3 and 4 from ground
 
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

  if (buttonAstate == HIGH || buttonBstate == HIGH || buttonCstate == HIGH || buttonDstate == HIGH) {       // check button A state is exclusive HIGH; HIGH is pressed   
     
    digitalWrite(ledRED, HIGH);                                                                          // this can be used to set motors and/or servo sequences
  } 
  
  else 
  
    digitalWrite(ledBLUE, HIGH);                                                                         // this can be used to set motors and/or servo sequences
  }
}
