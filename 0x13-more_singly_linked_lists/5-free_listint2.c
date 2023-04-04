#include "lists.h"

/**
 * free_listint2 - Frees the listint_t list.
 * @head: Points to the list to be freed.
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
	}
	*head = NULL;
}
