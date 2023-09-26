#include "lists.h"

/**
 * add_nodeint - adds a new node to the list struct listint_s.
 * @head: is a double pointer that points to the address of the new node.
 * @n: is the number of new nodes to add.
 * Return: newnode added.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *newnode;

	newnode = malloc(sizeof(struct listint_s));

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
