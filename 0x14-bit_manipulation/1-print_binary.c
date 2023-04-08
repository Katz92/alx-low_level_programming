#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	/* If n is greater than 1, recursively call print_binary with n shifted right by 1 bit */
	if (n > 1)
		print_binary(n >> 1);

	/* Extract the least significant bit of n using the bitwise AND operator,
	 * add it to the ASCII code of '0' to get the corresponding binary digit,
	 * and print the digit to the console using _putchar()
	 */
	_putchar((n & 1) + '0');
}

