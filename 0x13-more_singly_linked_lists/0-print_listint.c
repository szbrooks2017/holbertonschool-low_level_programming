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
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
