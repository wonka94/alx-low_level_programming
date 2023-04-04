#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list.
 * @head: A pointer to head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Return: address of the new element else return NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new_node;
	}

	return (*head);
}
