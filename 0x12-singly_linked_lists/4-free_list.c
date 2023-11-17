#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: head node
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
