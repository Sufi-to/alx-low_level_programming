#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed by src to dest
 * including the terminating null
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: pointer to the updated dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
