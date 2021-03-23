#include "lists.h"
/**
* free_listint2 - frees a list
* @head: pointer to start the list
*/

void free_listint2(listint_t **head)
{

	listint_t *temp;

	while(*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
