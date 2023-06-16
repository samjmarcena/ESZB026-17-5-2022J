#include <wiringPi.h>

#define LED_GPIO 16

int main(void) {
    // Inicializar a biblioteca WiringPi
    wiringPiSetup();

    // Configurar o pino do LED como saída
    pinMode(LED_GPIO, OUTPUT);

    // Ligar o LED
    digitalWrite(LED_GPIO, HIGH);

    // Aguardar 3 segundos
    delay(3000);

    // Desligar o LED
    digitalWrite(LED_GPIO, LOW);

    return 0;
}
