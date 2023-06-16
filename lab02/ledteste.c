#include <wiringPi.h>

#define LED_AMARELO 16

int main(void) {
    //configuração inicial
    wiringPiSetup();
    pinMode(LED_AMARELO, OUTPUT);


    digitalWrite(LED_AMARELO, HIGH);
    delay(3000);
    digitalWrite(LED_AMARELO, LOW);

    return 0;
}
