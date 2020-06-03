avr-gcc -g -Os -mmcu=attiny20 -c main.c
avr-gcc -g -mmcu=attiny20 -o main.elf main.o
avr-objcopy -j .text -j .data -O ihex main.elf main.hex


# -C config file

# flash jtag2updi to Arduino 328p
# avrdude -v -p atmega328p -c arduino -b 57600 -D  -U flash:w:JTAG2UPDI.hex:i -P /dev/ttyUSB1 
