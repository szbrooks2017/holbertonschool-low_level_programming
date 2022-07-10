#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at the index
 * @head: pointer to the head of the linked list
 * @index: index of the node
 * Return: returns the nth node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
