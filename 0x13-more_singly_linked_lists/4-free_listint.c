#include "lists.h"

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
