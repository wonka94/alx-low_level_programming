#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the list.
 * @head: pointer to head of the listint_t list.
 * @n: variable for new node
 * Return: address of the new element or NULL if function failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;

		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}
	return NULL;
}
