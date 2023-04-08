#include "main.h"
#include <stdint.h>

/**
 * get_endianness - checks whether a machine is big endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
    uint16_t x = 1;
    uint8_t *p = (uint8_t *)&x;
    return (p[0] == 1);
}

