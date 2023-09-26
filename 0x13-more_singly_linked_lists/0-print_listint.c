#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints the elements of a list
 * @h: is the head pointer argument to the function.
 * Return: count,the number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
