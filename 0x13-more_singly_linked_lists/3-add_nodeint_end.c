#include "lists.h"

/**
 * add_nodeint_end - This adds a node at the end of a linked list
 * @head: It is a pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: The pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp = *head;


	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = newnode;

	return (newnode);
}
