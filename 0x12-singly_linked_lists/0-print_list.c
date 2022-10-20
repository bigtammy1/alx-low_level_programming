#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of the list
 * @h: pointer to the next list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
