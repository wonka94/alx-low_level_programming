#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a 
 * given index of a listint_t list.
 * @head: Pointer to the first element in the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *head_copy = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = head_copy->next;
		free(head_copy);
		return (1);
	}

	for (i = 0; head_copy != NULL && i < index - 1; i++)
	{
		head_copy = head_copy->next;
	}

	tmp = head_copy->next;
	head_copy->next = tmp->next;
	free(tmp);

	return (1);
}
