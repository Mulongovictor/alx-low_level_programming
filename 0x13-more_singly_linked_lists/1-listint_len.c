#include "lists.h"

/**
 * listint_len - counts the number of elements in listint_len
 * @h: the head pointer that points to the first node of the list
 * Return: count, the number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
