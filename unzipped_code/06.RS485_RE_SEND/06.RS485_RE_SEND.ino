/*A16 code of RS485 */
void setup() {

  Serial1.begin(115200,SERIAL_8N1,16,13);  //  IO16   485RX   IO13 485TX
  Serial1.println("USB TO RS485 send is OK"); // RS485 port output the string

}

void loop() {

  /*if Serial2(RS485) receive data ,print it*/
  while(Serial1.available()>0)
   {
    Serial1.print((char)Serial1.read());//Read rs485 receive data  and print it
   }
  delay(200);
}
