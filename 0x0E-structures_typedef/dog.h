#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
* struct dog - a type describing a new dog
* @name: name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
* dog_t - typedef for dog
*/

typedef struct dog dog_t;

#endif
