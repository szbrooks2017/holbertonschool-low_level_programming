#include "lists.h"

/**
 * list_len - gives the count of the elements
 * @h: is the head or current node
 *
 * Return: returns the count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != '\0')
	{
		count++;
		h = h->next;
	}
	return (count);
}
