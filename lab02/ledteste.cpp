#include <stdio.h>
#include <wiringPi.h>

#define LED_AMARELO 27

int main(void) {
    wiringPiSetup();
    pinMode(LED_AMARELO, OUTPUT);

    while (true) {
        digitalWrite(LED_AMARELO, HIGH);  // Ligar o LED
        delay(1000);                  // Aguardar 1 segundo
        digitalWrite(LED_AMARELO, LOW);   // Desligar o LED
        delay(1000);                  // Aguardar 1 segundo
    }

    return 0;
}
