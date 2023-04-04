#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list.
 * @head: Pointer to the first value of a linked list.
 * @index: index of the node.
 * Return: the node else return null.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}

	return (head);
}
