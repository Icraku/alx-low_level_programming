#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function returns number of elements in a linked list
 * @h: A pointer to the head of the listint_t list.
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t element_count = 0;

	for (; h != NULL; h = h->next)
	{
		element_count++;
	}

	return (element_count);
}
