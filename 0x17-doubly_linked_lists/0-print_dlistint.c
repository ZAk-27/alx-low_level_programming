#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head ofdoubly linked list node
 * Return: the numb of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	for (; h; h = h->next, size++)
		printf("%d\n", h->n);
	return (size);
}
