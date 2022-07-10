#include <stdlib.h>
#include "dog.h"

/**
 * *_strdup - duplicate a string
 * @str: the string to duplicate
 * Return: the string duplicated
 *
 */

char *_strdup(char *str)
{
	int len = 0, a = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * len + 1);

	if (duplicate == NULL)
		return (NULL);

	while (a < len)
	{
		duplicate[a] = str[a];

		a++;
	}
	duplicate[a] = '\0';

	return (duplicate);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: returns new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *teemo = malloc(sizeof(struct dog));

	if (teemo == NULL)
		return (NULL);

	teemo->name = _strdup(name);

	if (teemo->name == NULL)
	{
		free(teemo);
		return (NULL);
	}

	teemo->owner = _strdup(owner);

	if (teemo->owner == NULL)
	{
		free(teemo->name);
		free(teemo);
		return (NULL);
	}

	teemo->age = age;
	return (teemo);
}
