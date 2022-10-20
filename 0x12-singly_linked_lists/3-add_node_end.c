#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add nodes to the end of the list
 * @head: pointer to the address of the first node
 * @str: string to add to the list
 * Return: address of new element, null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len;
	list_t *ptr;

	len = strlen(str);

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;

	if (*head == NULL)
		(*head) = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (ptr);
}
