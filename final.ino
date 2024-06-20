#include <SoftwareSerial.h>



#define BUTTON_PIN0 2
#define BUTTON_PIN1 3
#define BUTTON_PIN2 4
#define BUTTON_PIN3 5
#define BUTTON_PIN4 6
#define BUTTON_PIN5 7
#define BUTTON_PIN6 8
#define BUTTON_PIN7 9

void setup() 
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN0, INPUT_PULLUP); 
  pinMode(BUTTON_PIN1, INPUT_PULLUP); 
  pinMode(BUTTON_PIN2, INPUT_PULLUP); 
  pinMode(BUTTON_PIN3, INPUT_PULLUP); 
  pinMode(BUTTON_PIN4, INPUT_PULLUP); 
  pinMode(BUTTON_PIN5, INPUT_PULLUP); 
  pinMode(BUTTON_PIN6, INPUT_PULLUP); 
  pinMode(BUTTON_PIN7, INPUT_PULLUP); 
}

void loop()
{
   int buttonState0 = digitalRead(BUTTON_PIN0);
  int buttonState1 = digitalRead(BUTTON_PIN1);
  int buttonState2 = digitalRead(BUTTON_PIN2);
  int buttonState3 = digitalRead(BUTTON_PIN3);
  int buttonState4 = digitalRead(BUTTON_PIN4);
  int buttonState5 = digitalRead(BUTTON_PIN5);
  int buttonState6 = digitalRead(BUTTON_PIN6);
  int buttonState7 = digitalRead(BUTTON_PIN7);

  Serial.print(buttonState0);
  Serial.print(" ");
  
  Serial.print(buttonState1);
  Serial.print(" ");

  Serial.print(buttonState2);
  Serial.print(" ");

  Serial.print(buttonState3);
  Serial.print(" ");

  Serial.print(buttonState4);
  Serial.print(" ");

  Serial.print(buttonState5);
  Serial.print(" ");

  Serial.print(buttonState6);
  Serial.print(" ");

  Serial.print(buttonState7);
  Serial.println();
delay(5000);
}
