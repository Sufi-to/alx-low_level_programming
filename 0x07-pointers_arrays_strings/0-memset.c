#include "main.h"

/**
 * _memset - fills the first given number of bytes with constant character
 * @s: memory address that is going to be filled with characters
 * @b: char to be copied to the memory address
 * @n: number of bytes to be filled with b
 * Return: memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
