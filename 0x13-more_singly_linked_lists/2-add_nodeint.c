#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a linkd list
* @head: a pointer to the head of the linked list
* @n: data for the node we are adding
* Return: the address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));

	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;
	current->next = *head;

	*head = current;

	return (current);
}
