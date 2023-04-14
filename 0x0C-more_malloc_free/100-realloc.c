#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory using malloc and free
 * @ptr: pointer to previosly allocated with a call to malloc
 * @old_size: size of memory allocated to ptr using malloc
 * @new_size: new size of memory in bytes
 * Return: newly allocated memory for ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
		return (NULL);
	
	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
