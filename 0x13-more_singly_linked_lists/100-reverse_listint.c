#include "lists.h"

/**
 * reverse_listint - Reverses A list
 * @head: A pointer to the head of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	if (*head != NULL)
	{
		prev = *head;
		curr = (*head)->next;
		(*head) = (*head)->next;

		prev->next = NULL;

		while ((*head) != NULL)
		{
			(*head) = (*head)->next;
			curr->next = prev;

			prev = curr;
			curr = (*head);
		}
		(*head) = prev;
		return ((*head));
	}
	return (NULL);
}
