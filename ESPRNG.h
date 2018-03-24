#ifndef ESPRNG_h
#define ESPRNG_h

#include <Arduino.h>

#if defined ESP8266
#include <osapi.h>
#endif

#if defined ESP8266 || defined ESP32
/**
 * ESP8266 and ESP32 specific true random number generator
 */
class ESPRNG
{
    public:
        /**
         * Fill the [dst] array with [length] random bytes
         */
        static void fill(uint8_t *dst, unsigned int length);
        /**
         * Get a random byte
         */
        static byte get();
        /**
         * Get a 32bit random number
         */
        static uint32_t getLong();
    private:
};
#endif

#endif
