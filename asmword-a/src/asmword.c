// cloop.c
// Wed  5 Apr 16:49:55 UTC 2023
// https://wokwi.com/projects/361121269426995201

#ifndef NOT_WOKWI
    #define HAVE_FOUND_WOKWI_ENVIRONMENT
    #warning this is very much wokwi
    #ifdef IS_PIO_NOT_WOKWI
        #warning additionally this is platformio philhower core 5 April 2023
    #endif
    #ifndef IS_PIO_NOT_WOKWI
        #define BLINKS_PARAM 37
    #endif
#endif

#ifdef NOT_WOKWI
#define HAVE_FOUND_NON_WOKWI_ENVIRONMENT
#warning this is not wokwi
#endif

// #define BBLINKS_PARAM 17
// #define PBLINKS 7 // how many blinks?

#define PBLINKS BLINKS_PARAM // how many blinks?

#include "hardware/gpio.h"

#ifdef HAVE_FOUND_WOKWI_ENVIRONMENT
#warning this is very much wokwi
#include <Arduino.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

void experiment_a_asm();

#ifdef __cplusplus
}
#endif

#ifdef HAVE_FOUND_WOKWI_ENVIRONMENT
#warning this setup function header

    #ifdef IS_PIO_NOT_WOKWI
        #include "rp2040_reflash.inc"
    #endif
    #ifndef IS_PIO_NOT_WOKWI
        void reflash(void) { }
    #endif
void setup(void) {
#endif

#ifdef HAVE_FOUND_NON_WOKWI_ENVIRONMENT
#warning this is  not wokwi asmword function header
void asmword(void) {
#endif
    static volatile int c; // not volatile static as it was, prior
    c = (PBLINKS * 2) + 2;
    unsigned int ram = &c;
    return experiment_a_asm(c, ram);
}

#ifdef HAVE_FOUND_WOKWI_ENVIRONMENT
#warning this is very much wokwi
void loop() {
    delay(5000);
    reflash();
    while(-1);
}
#endif

// END.
