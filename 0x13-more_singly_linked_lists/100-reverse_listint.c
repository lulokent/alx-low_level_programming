#include "lists.h"

/**
 * reverse_listint - reverses a singl linked list
 * @head: pointer to the head
 * Return: a pointer to the first element of a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *new_tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		new_tmp = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (new_tmp == NULL)
			return (*head);
		*head = new_tmp;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);

}
