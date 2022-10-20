#include "lists.h"

/**
 * list_len - checks number of elements
 * @h: pointer to the next element
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
