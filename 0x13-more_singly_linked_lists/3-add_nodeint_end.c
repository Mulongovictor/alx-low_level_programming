#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the listint_s linked list.
 * @head: is a pointer that points to the pointer of pointing
 * to the address of the first node in the linked list.
 * @n: is the number of nodes to add to the end of the list.
 * Return: endnode, the new node added at the end of the list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;

	endnode = malloc(sizeof(listint_t));

	if (endnode == NULL)
	{
		return (NULL);
	}

	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
	}
	else
	{
	listint_t *oldnodes = *head;

	while (oldnodes->next != NULL)
	{
		oldnodes = oldnodes->next;
	}
	oldnodes->next = endnode;
	}
	return (endnode);
}
