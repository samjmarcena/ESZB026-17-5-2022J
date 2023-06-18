#include <stdio.h>
#include <wiringPi.h>

#define LED_AMARELO 16

int main(void) {
    wiringPiSetup();
    pinMode(LED_AMARELO, OUTPUT);

    while (true) {
        digitalWrite(LED_AMARELO, HIGH);  // Ligar o LED
        delay(1000);                  // Aguardar 1 segundo
        digitalWrite(LED_AMAREÇP, LOW);   // Desligar o LED
        delay(1000);                  // Aguardar 1 segundo
    }

    return 0;
}
