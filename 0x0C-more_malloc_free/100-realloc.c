#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloacate a memory block
 * @ptr: pointer to the previously allocated
 * @old_size: size, in bytes, of the allocated space of ptr
 * @new_size: new size, in bytes, of the new block memory
 *
 * Return: ptr
 * if new_size == old_size, returns ptr without changes
 * if malloc fails returns NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
<<<<<<< HEAD
		return (NULL);
=======
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = clone[i];
>>>>>>> 2a2ca8d2d2a4e9e6c1057a0224a649b69a3e47c1
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
