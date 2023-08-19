#include "lists.h"
#include <stdlib.h>

/**
  * insert_dnodeint_at_index- inserts a new
  * @h: head of doubly linked list
  * @idx: index to insert value
  * @n: value to insert
  * Return: adress of the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *hold = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	/* adding in the beginning */
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;

		if (*h)
			(*h)->prev = new;

		*h = new;

		return (new);
	}

	for (i = 0; hold; i++, hold = hold->next)
		if (i == idx - 1)
		{
			new->next = hold->next;
			if (new->next)
				new->next->prev = new;
			new->prev = hold;
			hold->next = new;

			return (new);
		}
	free(new);
	return (NULL);
}
