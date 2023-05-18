#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to head of list
 *
 * Return: sum of all the data (n) of a dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
