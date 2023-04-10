#include "main.h"

/**
 * _strncat - same as strcat but only allows fixed set characters
 * from src to dest
 * @dest: string where src wil be appended to
 * @src: string to be appended to dest
 * @n: number of character to be appended to dest from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
