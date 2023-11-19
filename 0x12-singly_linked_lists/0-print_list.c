#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h:head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%d]%s\n", h->len, h->str);
		else
			printf("[%d]%s\n", 0, "(nil)");
		if (h->next)
		{
			return (1 + print_list(h->next));
		}
		return (1);
	}
	return (0);
}
