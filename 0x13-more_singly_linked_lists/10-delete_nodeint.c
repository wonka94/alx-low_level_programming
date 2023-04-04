#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a 
 * given index of a listint_t list.
 * @head: Pointer to the first element in the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 on success else, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *head_copy = *head;
	unsigned int i;

	if (head_copy == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(head_copy);
		return (1);
	}

	while (i < index - 1)
	{
		if (head_copy->next == NULL)
		{
			return (-1);
		}

		head_copy = head_copy->next;
		i++;
	}

	tmp = head_copy->next;
	head_copy->next = tmp->next;
	free(tmp);

	return (1);
}
