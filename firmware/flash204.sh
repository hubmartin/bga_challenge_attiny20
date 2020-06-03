avrdude -C ../jtag2updi/avrdude.conf -c jtag2updi -P /dev/ttyUSB0 -p attiny204 -U flash:w:main.hex
