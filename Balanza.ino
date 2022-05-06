#include <SoftwareSerial.h>

SoftwareSerial balanza(3, 4);
void setup()
{
  Serial.begin(9600);
  balanza.begin(9600);

}


void loop()
{
    while (balanza.available())
    {
      //Serial.write(balanza.read());   // You can also use:     
      Serial.print(char(balanza.read()));
      //delayMicroseconds(1000000);
    }

}
