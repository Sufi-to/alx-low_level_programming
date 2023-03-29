#include "main.h"

/**
 * leet - changes character a-A to 4, e-E to 3, o-O to 0, t-T to 7,
 * l-L to 1
 * @s: string to be modified
 * Return: pointer to the modified string
 */
char *leet(char *s)
{
	char *a;
	char *b;
	int i, j;

	a = "aAeAoOtTlL";
	b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
