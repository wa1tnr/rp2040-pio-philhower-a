// rp2040_reflash.inc
// Wed  5 Apr 16:49:55 UTC 2023

#include "pico/bootrom.h"
extern void reflash(void);
void reflash(void) {
#warning reset usb boot seen
    reset_usb_boot(0, 0);
}
