#include "lists.h"

/**
* free_listint - frees the list
* @head: a pointer to the head of the list to be freed
*
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
