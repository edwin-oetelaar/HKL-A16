#include "Arduino.h"

#define ANALOG_A1   36        // IO36  
#define ANALOG_A2   34        // IO34    
#define ANALOG_A3   35        // IO35   
#define ANALOG_A4   39        // IO39

void setup()
{
	Serial.begin(115200);
	delay(1000);

  pinMode(ANALOG_A1,INPUT);
  pinMode(ANALOG_A2,INPUT);
  pinMode(ANALOG_A3,INPUT);
  pinMode(ANALOG_A4,INPUT);
}

void loop()
{

  int A3 = analogRead(ANALOG_A3);
  int A4 = analogRead(ANALOG_A4);

  float VO3 = A3*(5.0/4095);
  float VO4 = A4*(5.0/4095);
  Serial.printf("The voltage of ADC_01 is:%d\n", analogRead(ANALOG_A1));   // Print the data of ANALOG_A1 4~20MA
  Serial.printf("The voltage of ADC_02 is:%d\n", analogRead(ANALOG_A2));   // Print the data of ANALOG_A2  4~20MA
  Serial.printf("The voltage of ADC_03 is:%.2fV\n", VO3);   // Print the voltage of ADC_03   0-5V
  Serial.printf("The voltage of ADC_04 is:%.2fV\n", VO4);   // Print the voltage of ADC_04   0-5V
  Serial.println();
  delay(1000);

}
