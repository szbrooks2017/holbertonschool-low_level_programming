#include "lists.h"

/**
* pop_listint - deletes the first node of a linked list
* @head: points to the firt node of a linked list
* Return: returns data of first node or 0 if list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	else
	{

	temp = *head;
	data = temp->n;
	*head = head->next;

	free(temp);
	return (data);
}
