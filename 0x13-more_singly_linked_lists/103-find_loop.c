#include "lists.h"

/**
 * find_listint_loop - finds the start of a loop in a linked list
 * @head: start of linked list
 * Return: start of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	while (head && (*head).next)
	{
		slow = head;
		fast = (*head).next;
		while (slow != fast)
		{
			if (slow)
				slow = (*slow).next;
			if (fast == head)
				return (head);
			if (fast)
				fast = (*fast).next;
			if (fast == head)
				return (head);
			if (fast)
				fast = (*fast).next;
			if (fast == head)
				return (head);
		}
		head = (*head).next;
	}
	return (NULL);
}
