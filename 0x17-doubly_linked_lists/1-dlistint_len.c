#include "lists.h"

/**
 * dlistint_len - prints number of elements of a dlistint_t list
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; h = h->next, nodes++)
		;

	return (nodes);
}
