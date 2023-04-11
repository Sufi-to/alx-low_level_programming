#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocates memory that contains the copy of the given string
 * @str: string to be copied
 * Return: pointer to the new string, NULL if str is null or memory is
 *insufficient
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int x;

	i = 0;
	x = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);

	while (x < i)
	{
		*(ptr + x) = str[x];
		x++;
	}
	*(ptr + i) = '\0';

	return (ptr);
}
