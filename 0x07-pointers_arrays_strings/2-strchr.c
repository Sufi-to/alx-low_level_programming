#include "main.h"
#include <stddef.h>
/**
 * _strchr - checks if a character is in a string
 * @s: string to checked if it contains the character
 * @c: character to be compared against the string
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
