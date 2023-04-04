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
	listint_t *copy = *head;
	unsigned int i;

	if (copy != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(copy);
			return (1);
		}

		for (i = 0; i < (index - 1); i++)
		{
			if (copy->next == NULL)
			{
				return (-1);
			}

			copy = copy->next;
		}

		tmp = copy->next;
		tmp->next = tmp->next;
		free(tmp);

		return (1);
	}
	
	return (-1);
}
