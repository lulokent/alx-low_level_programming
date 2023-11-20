#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head node
 *
 * Return: numbe of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (count = 0; h != NULL; count++)
	{
		printf("% d\n", h->n);
		h = h->next;
	}
	return (count);
}
