#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 * haystack.
 * @haystack: string to be searched
 * @needle: string to be looked for in the string haystack
 * Return: pointer to the beginning to the substring if found or null if not.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
