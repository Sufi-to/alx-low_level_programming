#include "main.h"

/**
 * _memcpy - copies a number of bytes given from one address to another
 * @dest: memory area where bytes will be copied to
 * @src: memory area from while bytes will be copied from 
 * @n: number of bytes to be copied
 * Return: memory address of the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	
	return (dest);
}
