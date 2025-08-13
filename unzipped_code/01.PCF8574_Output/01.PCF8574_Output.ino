/*HANKERILA  MODEL:A16  OUTPUT CONTROL RELAYS
HANKERILA Controller Store :https://www.aliexpress.com/store/1103673574
*/
#include "Arduino.h"
#include "PCF8574.h"

// Set the i2c address
PCF8574 pcf8574_1(0x24, 4, 5);  // Define PCF8574 object pcf8574_1 with address 0x24 and pins 4 and 5
PCF8574 pcf8574_2(0x25, 4, 5);  // Define PCF8574 object pcf8574_2 with address 0x25 and pins 4 and 5

void setup()
{
    Serial.begin(115200);  // Initialize serial communication with a baud rate of 115200
//    delay(1000);  // Commented out delay

    // Set pinMode to OUTPUT
    pcf8574_1.pinMode(P0, OUTPUT);  // Set pin P0 of pcf8574_1 to output mode
    pcf8574_1.pinMode(P1, OUTPUT);  // Set pin P1 of pcf8574_1 to output mode
    pcf8574_1.pinMode(P2, OUTPUT);  // Set pin P2 of pcf8574_1 to output mode
    pcf8574_1.pinMode(P3, OUTPUT);  // Set pin P3 of pcf8574_1 to output mode
    pcf8574_1.pinMode(P4, OUTPUT);  // Set pin P4 of pcf8574_1 to output mode
    pcf8574_1.pinMode(P5, OUTPUT);  // Set pin P5 of pcf8574_1 to output mode
    pcf8574_1.pinMode(P6, OUTPUT);  // Set pin P6 of pcf8574_1 to output mode
    pcf8574_1.pinMode(P7, OUTPUT);  // Set pin P7 of pcf8574_1 to output mode

    pcf8574_2.pinMode(P0, OUTPUT);  // Set pin P0 of pcf8574_2 to output mode
    pcf8574_2.pinMode(P1, OUTPUT);  // Set pin P1 of pcf8574_2 to output mode
    pcf8574_2.pinMode(P2, OUTPUT);  // Set pin P2 of pcf8574_2 to output mode
    pcf8574_2.pinMode(P3, OUTPUT);  // Set pin P3 of pcf8574_2 to output mode
    pcf8574_2.pinMode(P4, OUTPUT);  // Set pin P4 of pcf8574_2 to output mode
    pcf8574_2.pinMode(P5, OUTPUT);  // Set pin P5 of pcf8574_2 to output mode
    pcf8574_2.pinMode(P6, OUTPUT);  // Set pin P6 of pcf8574_2 to output mode
    pcf8574_2.pinMode(P7, OUTPUT);  // Set pin P7 of pcf8574_2 to output mode

    pcf8574_1.begin();  // Initialize pcf8574_1
    pcf8574_2.begin();  // Initialize pcf8574_2
}

void loop()
{
    for(int i = 0; i <= 7; i++) {  // Loop from 0 to 7
        pcf8574_1.digitalWrite(i, LOW);  // Set digital output of pin i of pcf8574_1 to LOW
        delay(100);  // Delay for 100 milliseconds
    }
    for(int i = 0; i <= 7; i++) {  // Another loop from 0 to 7
        pcf8574_2.digitalWrite(i, LOW);  // Set digital output of pin i of pcf8574_2 to LOW
        delay(100);  // Delay for 100 milliseconds
    }
    for(int i = 0; i <= 7; i++) {  // One more loop from 0 to 7
        pcf8574_1.digitalWrite(i, HIGH);  // Set digital output of pin i of pcf8574_1 to HIGH
        delay(100);  // Delay for 100 milliseconds
    }
    for(int i = 0; i <= 7; i++) {  // Final loop from 0 to 7
        pcf8574_2.digitalWrite(i, HIGH);  // Set digital output of pin i of pcf8574_2 to HIGH
        delay(100);  // Delay for 100 milliseconds
    }
}