#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 * @head: start of list
 * Return: the sum of the values
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;
	return (sum);
}
