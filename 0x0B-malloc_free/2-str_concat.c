#include <stdlib.h>
#include "main.h"

/**
 * str_concat - allocates memory to the concatnation of s1 and s2
 * @s1: string to be concatnated
 * @s2: string to be concatnated
 * Return: pointer to the concat result and NUll if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i;
	unsigned int j;
	unsigned int x;
	unsigned int y;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = (char *) malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	x = 0;
	y = 0;
	if (s1)
	{
		while (s1[x] != '\0')
		{
			ptr[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (s2[y] != '\0')
		{
			ptr[x] = s2[y];
			x++;
			y++;
		}
	}
	ptr[x] = '\0';
	return (ptr);
}
