#!/bin/bash

LED_GPIO=16  # Usar uma variável facilita alterações futuras na porta usada
VALUE=$1      # Argumento fornecido ao executar o script

echo $LED_GPIO > "/sys/class/gpio/export"
sleep 1
echo "out" > "/sys/class/gpio/gpio$LED_GPIO/direction"
echo $VALUE > /sys/class/gpio/gpio$LED_GPIO/value
sleep 3
echo 0 > /sys/class/gpio/gpio$LED_GPIO/value
echo $LED_GPIO > "/sys/class/gpio/unexport"
