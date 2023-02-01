
#include <Mouse.h>
#include "Keyboard.h"

int pedalPin = 9; 
int pedalPin2 = 8; 
int pedalPin3 = 7; 


void setup()
{
  
  pinMode(pedalPin, INPUT);    
  digitalWrite(pedalPin, HIGH);
pinMode(pedalPin2, INPUT);    
  digitalWrite(pedalPin2, HIGH);
  pinMode(pedalPin3, INPUT);    
  digitalWrite(pedalPin3, HIGH);
}

void loop()
{

  
  // ASAS MAKROSU  
   if (digitalRead(pedalPin) == LOW) {
         Keyboard.write('w');
         Keyboard.write('8');
         Keyboard.write('9');
         Keyboard.write('0');
         Keyboard.write('1');
         Keyboard.write('2');
         Keyboard.write('3');
         Keyboard.write('4');
         Keyboard.write('5');
         Keyboard.write('6');
    
          Keyboard.write('r');

  }
  
 if (digitalRead(pedalPin2) == LOW) {
  Keyboard.write('1');
         Keyboard.write('r');
    Keyboard.write('9');
      Keyboard.write('0');
       Keyboard.write('8');
      Keyboard.write('9');
      Keyboard.write('0');
       Keyboard.write('8');
      Keyboard.write('9');
      Keyboard.write('0');
       Keyboard.write('8');
Keyboard.write('1');
  }



   if (digitalRead(pedalPin3) == LOW) {
        Keyboard.write('1');
        Keyboard.write('8');
           Keyboard.write('9');
     Keyboard.write('0');
         Keyboard.write('r');
           
      
  }
  
 /*

      if (digitalRead(pedalPin) == LOW) {
            Mouse.press(MOUSE_LEFT);
             Mouse.press(MOUSE_LEFT);
              Mouse.press(MOUSE_LEFT);
             Mouse.move(0, 5);
         
           */ 
      
      
  }
