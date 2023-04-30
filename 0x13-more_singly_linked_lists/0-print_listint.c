#include "lists.h"


/**
 * print_listint-t   print  elements of linked list and return # of elements
 *
 * @h: pointer to the first element
 * Return: elements numbers
 */

size_t print_listint(const listint_t *h)
{

	int i;


	for (i = 0; h; h = (*h).next, i++)
		printf("%d\n", (*h).n);


	return (i);
}
