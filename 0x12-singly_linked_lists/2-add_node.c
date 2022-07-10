#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of list_t list
 * @head: a pointer to the head of list_t list
 * @str: the string to be added to the list
 * Return: if
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;
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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
