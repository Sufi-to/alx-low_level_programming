#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first sting to compare
 * @s2: second string to compare
 * Return: less than if s1 is less than s2 but 0 if equal
 * more than 0 if s1 is greater s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (s1[i] - s2[i]);
}

