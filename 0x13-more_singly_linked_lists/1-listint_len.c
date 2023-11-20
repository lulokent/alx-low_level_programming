#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (count = 0; h != 0; count++)
	{
		h = h->next;
	}
	return (count);
}
