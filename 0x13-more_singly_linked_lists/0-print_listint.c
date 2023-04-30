#include "lists.h"


/**
 * print_listint-t   print  elements of linked list and return # of elements
 *
 * @h: pointer to the first element
 * Return: elements numbers
 */

size_t print_listint(const listint_t *h)
{

	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
}
