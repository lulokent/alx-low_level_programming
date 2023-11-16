#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: head node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t element;

	element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
