#include "lists.h"
#include <stdlib.h>
/**
  * free_dlistint - frees a dlistint_t
  * @head: head of double list
  * Return: void
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

		while (head)
		{
			hold = head;
			head = (*head).next;
			free(hold);
		}
}
