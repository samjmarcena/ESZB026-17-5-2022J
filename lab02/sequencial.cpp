#include <wiringPi.h>

#define LED_PIN 16

int main(void) {
    wiringPiSetup();
    pinMode(LED_PIN, OUTPUT);

    while (true) {
        digitalWrite(LED_PIN, HIGH);  // Ligar o LED
        delay(1000);                  // Aguardar 1 segundo
        digitalWrite(LED_PIN, LOW);   // Desligar o LED
        delay(1000);                  // Aguardar 1 segundo
    }

    return 0;
}
