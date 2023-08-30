#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of listint_t list and return its data
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The data of the deleted head node, or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
