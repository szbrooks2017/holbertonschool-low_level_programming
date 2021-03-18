#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_list - prints all the elements of a list_t
*
* @h: is a pointer to the linked list
* Return: returns the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != '\0')
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	nodes++;
	h = h->next;
	}

return (nodes);
}
