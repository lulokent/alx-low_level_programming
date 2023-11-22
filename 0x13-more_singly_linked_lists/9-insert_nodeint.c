#include "lists.h"

/**
 * create_new_node - function that creates a new node
 * @n: the data of the node
 * Return: pointer to the node
 */
listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element of the list
 * @idx: index to the position of the new node
 * @n: number of nodes
 * Return:the address of the newly creared node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *old_temp;
	listint_t *new_node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
		*head = new_node;
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = temp;
	else
	{
		old_temp = temp->next;
		temp->next = new_node;
		new_node->next = old_temp;
	}
	return (new_node);

}
