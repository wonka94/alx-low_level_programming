#include "lists.h"

/**
 * sum_listint - Calculates the sum of values of the linked list.
 * @head: Pointer to the first value of the linked list.
 * Return: the sum of all the data else return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
