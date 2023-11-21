#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
