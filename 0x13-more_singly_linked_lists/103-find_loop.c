#include "list.h"

/**
 * find_listint_loop - finds the loop like tortie and hare
 * @head: points to the header of a linked list
 * Return: returns the adddress where the loop starts or null
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortie, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortie = head->next;
	hare = head->next->next;

	while (hare)
	{
		if (tortie == hare)
		{
			tortie = head;

			while (tortie != hare)
			{
				tortie = tortie->next;
				hare = hare->next;
			}
			return (tortie);
		}
		tortie = tortie->next;
		hare = hare->next->next;
	}
	return (NULL);
}
}
