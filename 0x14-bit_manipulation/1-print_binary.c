#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    int i, bit_count = sizeof(n) * 8;

    /* Ignore leading zero bits */
    for (i = bit_count - 1; i >= 0; i--)
    {
        if ((n >> i) & 1)
            break;
    }

    /* Print remaining bits in reverse order */
    for (; i >= 0; i--)
    {
        _putchar((n >> i) & 1 ? '1' : '0');
    }
}

