#include <stdio.h>
#include <wiringPi.h>

// LED_AMARELO Pin - wiringPi pin 27 is BCM_GPIO 16.
// Check lib documentation to see the respectives Wiring pins to GPIO

#define	LED_AMARELO	27

int main (void)
{
  printf ("ta funcionando?\n") ;

  wiringPiSetup () ;
  pinMode (LED_AMARELO, OUTPUT) ;
  
int i = 0;
  while (i<5)
  { 
    digitalWrite (LED_AMARELO, HIGH) ;
    delay (1000) ;
    digitalWrite (LED_AMARELO, LOW) ;
  }
  return 0 ;
}
