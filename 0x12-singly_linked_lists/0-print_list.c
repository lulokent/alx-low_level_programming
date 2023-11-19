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
		if (h->str == NULL)
			printf("[%u]%s\n", 0, "(nil)");

		else if (h->str != NULL)
			printf("[%d]%s\n", h->len, h->str);

		if (h->next)
		{
			return (1 + print_list(h->next));
		}
		return (1);
	}
	return (0);
}
