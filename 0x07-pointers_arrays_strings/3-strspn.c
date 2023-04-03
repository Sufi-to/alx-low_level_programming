#include "main.h"

/**
 * _strspn - find the number of bytes in the initial segment  of s
 * which consist only of bytes from another string
 * @s: input string
 * @accept: string to be matched with string s
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int b;

	b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b++;
				break;
			}
			else if (accept[j+1] == '\0')
			{
				return (b);
			}
		}
	}
	return (b);
}
