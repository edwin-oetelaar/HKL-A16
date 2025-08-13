/*A16 PCF8574 output control DO8 relays*/

#include "Arduino.h"
#include "PCF8574.h"

// Create an instance of DO8 
// Set the i2c address
PCF8574 pcf8574_8(0x20,4,5);

void setup()
{
	Serial.begin(9600);
  Serial.println(__FILE__);  //Print file storage path

	// Set pinMode to OUTPUT
  pcf8574_8.pinMode(P0, OUTPUT);
  pcf8574_8.pinMode(P1, OUTPUT);
  pcf8574_8.pinMode(P2, OUTPUT);
  pcf8574_8.pinMode(P3, OUTPUT);
  pcf8574_8.pinMode(P4, OUTPUT);
  pcf8574_8.pinMode(P5, OUTPUT);
  pcf8574_8.pinMode(P6, OUTPUT);
  pcf8574_8.pinMode(P7, OUTPUT);

  pcf8574_8.begin();

}

void loop()
{

  for(int i=0;i<=7;i++)
  {
    delay(300);
	  pcf8574_8.digitalWrite(i, LOW);
  }

   for(int i=0;i<=7;i++)
  {
    delay(300);
	  pcf8574_8.digitalWrite(i, HIGH);
  }
}
