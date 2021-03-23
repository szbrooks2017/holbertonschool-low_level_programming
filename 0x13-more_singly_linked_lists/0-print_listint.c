#include "lists.h"
/**
* print_listint - prints the linked list
* @h: head of the list of elements
* Return: returns the count
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != '\0')
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

return (count);
}
