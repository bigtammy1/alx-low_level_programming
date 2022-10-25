#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @h: The head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numElem = 0;
	const listint_t *headInit = NULL;

	while (head != NULL && head != headInit)
	{
		if (headInit == NULL)
			headInit = head;
		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
		numElem++;
	}

	return (numElem);
}
