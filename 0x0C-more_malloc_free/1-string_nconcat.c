#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number of s2 bytes to be concatenated with s1
 * Return: pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;
	unsigned int k = 0;
	unsigned int totalL = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	totalL = i + n;
	ptr = malloc(sizeof(char) * (totalL + 1));

	if (ptr == NULL)
		return (NULL);
	while (x < i)
	{
		ptr[x] = s1[x];
		x++;
	}
	while (x < totalL)
	{
		ptr[x] = s2[k];
		x++;
		k++;
	}

	ptr[x] = '\0';
	return (ptr);
}
