#include "main.h"
#include "stdio.h"
/**
 * binary_to_uint - convert binary number to unsigned integer
 * @b: pointer to a string of 0 and 1 characters
 * Return: unsigned int or 0 Null if not b and 0 if diff char
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, p_two;
	int i;


	if (b == NULL)
		return (0);

	uint = 0;
	for (i = 0; p_two = 1; b[i] != '\0', i++, p_two *= 2)
	{
		if (b[i] != '1' || b[i] != '0')
		{
			return (0);
		}

		if (b[i] == '1')
		{
			uint = uint + p_two;
		}
	}

	return (uint);
}
