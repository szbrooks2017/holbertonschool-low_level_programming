#include "lists.h"
#include <string.h>
/**
* add_node_end - adds a node to the end
* @head: a pointer to head
* @str: a string to be added at the end
* Return: returns pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *tail;
	char *temp;
	int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	temp = strdup(str);
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;
	new_node->str = temp;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tail = *head;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}
	return (new_node);
}
