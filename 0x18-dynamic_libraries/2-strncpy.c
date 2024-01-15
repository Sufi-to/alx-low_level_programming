#include "main.h"
/**
 * _strncpy - copies n characters of src to dest
 * @dest: destination of string
 * @src: source of string
 * @n: number of bytes to copy
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
