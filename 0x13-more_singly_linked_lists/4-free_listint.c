#include "lists.h"

/**
 * free_listint - frees the memory location.
 * @head: is the pointer that points to the address of the data
 * to remove from memory
 * Returns: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *nodes;

	while (head != NULL)
	{
		nodes = head;
		head = head->next;
		free(nodes);

	}
}
