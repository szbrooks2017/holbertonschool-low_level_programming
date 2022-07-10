
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a linkd list
 * @head: a pointer to the head of the linked list
 * @n: data for the node we are adding
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}

	else
	{

		current = *head;
		while (current->next != NULL)

			current = current->next;
		current->next = temp;
	}
	return (temp);
}
