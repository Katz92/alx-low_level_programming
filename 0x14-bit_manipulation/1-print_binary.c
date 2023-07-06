#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Description: This function takes an unsigned long integer and prints its
 * binary representation. It does this by first creating a mask to check the
 * leftmost bit, then looping through each bit in the number and printing '1'
 * if the bit is set and '0' if it is not set. If the number is zero, it prints
 * a single '0'. The function does not return a value.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found_first_bit = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			found_first_bit = 1;
			_putchar('1');
		}
		else if (found_first_bit)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (!found_first_bit)
	{
		_putchar('0');
	}
}

