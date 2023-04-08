#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
    /* create a mask to check the leftmost bit */
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int found_first_bit = 0;

    while (mask > 0) {
        /* check if the current bit is set */
        if (n & mask)
        {
            found_first_bit = 1;
            _putchar('1');
        }
        else if (found_first_bit)
        {
            _putchar('0');
        }

        /* shift the mask to the right */
        mask >>= 1;
    }

    /* if the number was 0, we need to print a single 0 */
    if (!found_first_bit)
    {
        _putchar('0');
    }
}

