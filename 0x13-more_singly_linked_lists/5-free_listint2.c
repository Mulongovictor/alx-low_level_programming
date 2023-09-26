#include "lists.h"

/**
 * free_listint2 - free the memory allocated
 * @head: - is a pointer that points to another pointer.
 */

void free_listint2(listint_t **head)
{
	listint_t *old_node;
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	old_node = *head;

	while (old_node != NULL)
	{
		temp = old_node;
		old_node = old_node->next;
		free(temp);

	}
	*head = NULL;
}
