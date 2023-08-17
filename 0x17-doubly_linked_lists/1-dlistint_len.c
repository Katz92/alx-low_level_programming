#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @p_ls: pointer to the list.
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *p_ls)
{
	const dlistint_t *node = p_ls;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}

	return (count);
}
