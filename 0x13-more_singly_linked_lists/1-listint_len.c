#include "lists.h"

/**
 * listint_len - the number of elements in a linked list
 * @h: the head of the linked list
 * Return: returns the count of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != '\0')
	{
		h = h->next;
		count++;
	}
	return (count);
}
