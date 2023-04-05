# Wed  5 Apr 16:49:55 UTC 2023
# Makefile

# platformio rp2040 philhower core

# $ make clean ; make ; make install

MOUNT_POINT=media

builder:
	pio run

all:
	@echo "'make builder'  (or just 'make')  for the usual 'make' invocation.  May be verbose."

xinstall:
	pio run -t uploadDONOTUSE

install:
	cp -p ./.pio/build/pico/firmware.uf2 /${MOUNT_POINT}/${LOGNAME}/RPI-RP2/firmware.uf2

clean:
	pio run -t clean

distclean: clean
	rm -rf ./.pio

full: distclean builder install

advise:
	@echo "'make builder' for the usual 'make' invocation.  May be verbose."

# end.
