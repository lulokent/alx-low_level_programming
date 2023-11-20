#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - inserts a new node at the beginning of the list
 * @head: head node
 * @n: number of elements
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (0);
	}

	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		newnode->next = NULL;
	}
	else
		newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (0);

}
