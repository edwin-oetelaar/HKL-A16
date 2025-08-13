/*A16 DS18B20 CODE*/
#include <DS18B20.h>
DS18B20 ds1(32);  //channel-1-DS18b20
DS18B20 ds2(33);  //channel-2-DS18b20
DS18B20 ds3(14);  //channel-3-DS18b20

void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);
}
/*DS18B20 temperature detect*/
void loop()
{
  Serial.print("Temperature1:");
  Serial.print(ds1.getTempC()*1.8+32);
  Serial.println("F/\n");
  delay(500); 
  Serial.print("Temperature2:");
  Serial.print(ds2.getTempC()*1.8+32);
  Serial.println("F/\n");
  delay(500);
  Serial.print("Temperature3:");
  Serial.print(ds3.getTempC()*1.8+32);
  Serial.println("F/\n");
  delay(500); 
} 



