#include "lists.h"

/**
* insert_nodeint_at_index - adds a node at a specific point
* @head: is the pointer to the head of the linked list
* @idx: the node is added after idx
* @n: value added
* Return: if function fails - NULL otherwise new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	idx--;
	while (idx != 1)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		idx--;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
