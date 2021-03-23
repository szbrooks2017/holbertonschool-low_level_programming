#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint - prints the linked list
* @h: head of the list of elements
* Return: returns the count
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h->next)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
