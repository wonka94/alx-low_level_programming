#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the head of the listint_t list.
 * Return: The head node's data else return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head != NULL)
	{
		tmp = *head;
		value = (*head)->n;
		*head = (*head)->next;

		free(tmp);

		return (value);
	}

	return (0);
}
