#include "main.h"

/**
 * _strlen- prints the length of the string
 * @s: string to be evaluated
 * Return: the length of string
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
