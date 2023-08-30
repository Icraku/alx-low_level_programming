#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function adds a new node at start of the listint_t list
 * @head: The pointer to a pointer to rhe head of the listint_t list.
 * @n: The int value to be added to the new node.
 * Return: The address of the new node element, NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
