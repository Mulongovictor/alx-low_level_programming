#include "lists.h"

/**
 * pop_listint - deletes the head and keeps the value the head had
 * @head: is a double pointer to the head
 * Return: data, the data that was previously held by the head.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
