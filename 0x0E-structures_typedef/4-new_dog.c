#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, lenname, lenowner;

	lenname = 0;
	lenowner = 0;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL || name == NULL || owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (name[lenname] != '\0')
		lenname++;
	while (owner[lenowner] != '\0')
		lenowner++;
	ptr->name = malloc(lenname + 1);
	ptr->owner = malloc(lenowner + 1);
	if ((ptr->name == NULL) || (ptr->owner == NULL))
	{
		free(ptr);
		free(ptr->name);
		free(ptr->owner);
		return (NULL);
	}
	for (i = 0; i < lenname; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->name[i] = '\0';
	ptr->age = age;
	for (i = 0; i < lenowner; i++)
	{
		ptr->owner[i] = owner[i];
	}
	ptr->owner[i] = '\0';
	return (ptr);
}
