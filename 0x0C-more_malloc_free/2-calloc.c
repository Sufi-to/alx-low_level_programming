#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements
 * and set the memory to zero
 * @nmemb: number of elements of the array
 * @size: size of elements in bytes
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	char b = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr =  malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = b;
	}
	return (ptr);
}
