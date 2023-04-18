#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated to dogs
 * @d: dog_t instance to be freed
 * Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
