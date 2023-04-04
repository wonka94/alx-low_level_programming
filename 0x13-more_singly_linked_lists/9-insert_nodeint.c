#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position of a linked list
 * @head: pointer to the first node in the list
 * @idx: index to add the new node
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;

		if (idx == 0)
		{
			new->next = tmp;
			*head = new;
			return (new);
		}

		for (i = 0; i < (idx - 1); i++)
		{
			if (tmp == NULL || tmp->next == NULL)
			{
				return (NULL);
			}

			tmp = tmp->next;
		}

		new->next = tmp->next;
		tmp->next = new;

		return (new);
	}

	return (NULL);
}
