#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function locates the first occurrence in the string s of any
 * bytes in the string accept
 * @s: string to be matched against accept
 * @accept: input string
 * Return: pointer to the byte in s that matches of one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
