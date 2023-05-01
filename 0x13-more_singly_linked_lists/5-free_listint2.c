#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - this function  frees listint_t list
 * @head: double pointer in the beginning of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (head && *head)
	{
		hold = *head;
		*head = (**head).next;
		free(hold);
	}
}
