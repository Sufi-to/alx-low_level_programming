#include "main.h"

/**
 * *_strcat - appends the second string to the first overwriting
 * the null byte and
 * add new null byte the end of the first
 * @src: string to be appended at the end of dest
 * @dest: string where src will be appended
 * Return: a pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
