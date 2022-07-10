#include "lists.h"

/**
 * sum_listint - calculates the sum of all the n of a listint
 * @head: a pointer to the head of the listint
 * Return: if the list is empty 0 otherwise the sum.
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
