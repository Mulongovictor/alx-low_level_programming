#include "lists.h"

/**
 * print_dlistint - prints elements of the linked list
 * @h: head pointer
 *
 * Return: the number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("The stack is empty\n");
	}
	else
	{
		while (h)
		{
			printf("%d", h->n);
			h = h->next;
			count += 1;
			printf("\n");
		}
	}
	return (count);
}
