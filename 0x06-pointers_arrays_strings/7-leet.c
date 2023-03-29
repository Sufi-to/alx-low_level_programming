#include "main.h"

/**
 * leet - changes character a-A to 4, e-E to 3, o-O to 0, t-T to 7,
 * l-L to 1
 * @s: string to be modified
 * Return: pointer to the modified string
 */
char *leet(char *s)
{
	int x, y;
	char a[] = "aAeAoOtTlL";
	char b[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
			}
		}
	}

	return (s);
}
