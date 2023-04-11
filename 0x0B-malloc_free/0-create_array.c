#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialize with specific array
 * @size: size of array
 * @c: initialize array with it
 * Return: pointer to array.. Null if it fails or if size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (0);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	*(ptr + i) = '\0';

	return (ptr);
}
