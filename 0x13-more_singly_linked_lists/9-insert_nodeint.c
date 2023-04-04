#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a linked list at a given position.
 * @head: A pointer to first node of the linked list.
 * @idx: The index  where new node should be added.
 * @n: value to insert in new node
 * Return: address of the new node else return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp = *head;
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
