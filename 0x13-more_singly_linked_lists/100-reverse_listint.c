#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to the first elementof the  list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	previous = NULL;

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	(*head)->next = previous;

	return (*head);
}
