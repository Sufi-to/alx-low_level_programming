#include "main.h"

/**
 * string_toupper - changes string lowercase letters to uppercase
 * @s: string to modify
 *Return: pointer to resulting string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
