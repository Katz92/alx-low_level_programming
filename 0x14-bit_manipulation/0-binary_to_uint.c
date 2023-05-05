#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t len, i;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) | (b[i] - '0');
	}

	return (result);
}

