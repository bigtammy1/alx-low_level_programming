#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds node to the beginning of list
 * @head: pointer to the first link
 * @str: string to add to list
 * Return: new list, null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len;

	len = strlen(str);

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
