#!/bin/bash

LED_GPIO=16  # Usar uma variavel facilita alteracoes futuras na porta usada

echo $LED_GPIO >> "/sys/class/gpio/export"
sleep 1
echo "out" >> "/sys/class/gpio/gpio$LED_GPIO/direction"
echo $1 >> "/sys/class/gpio/gpio$LED_GPIO/value"
sleep 3
echo $0 >> "/sys/class/gpio/gpio$LED_GPIO/value"
echo $LED_GPIO >> "/sys/class/gpio/unexport"

