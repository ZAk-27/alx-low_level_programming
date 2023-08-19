#include "lists.h"

/**
  * get_dnodeint_at_index - get node at a given index
  * @head: start of double list
  * @index: index to the node
  * Return: return the nth node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++, head = head->next)
		if (i == index)
			return (head);
	return (NULL);
}
