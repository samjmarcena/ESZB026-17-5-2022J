import RPi.GPIO as GPIO
import time

LED_AMARELO = 16  # Número do pino GPIO conectado ao LED

# Configuração inicial
GPIO.setmode(GPIO.BCM)
GPIO.setup(LED_AMARELO, GPIO.OUT)

# Ligar o LED
GPIO.output(LED_AMARELO, GPIO.HIGH)

# Aguardar 3 segundos
time.sleep(3)

# Desligar o LED
GPIO.output(LED_AMARELO, GPIO.LOW)

# Limpeza dos recursos utilizados
GPIO.cleanup()
