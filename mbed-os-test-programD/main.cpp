#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led(DigitalOut &ledpin, int n);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {

      Led(myLED,3);

      Led(myLED2,2);


      ThisThread::sleep_for(800ms);
   }
}

void Led(DigitalOut &ledpin, int n)
{
   for (int i = 0; i < 2*n; i++)
   {                     //blink for 10 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(100ms);
   }
}