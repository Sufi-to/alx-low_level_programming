#include <stdio.h>
#include <stdbool.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int j, k, temp, sum;
	bool x;

	j = 1;
	k = 2;
	sum = 0;
	x = true;

	while (x)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum += j;
			temp = j + k;
			j = k;
			k = temp;
		} else if (j < 4000000 && (j % 2) != 0)
		{
			temp = j + k;
			j = k;
			k = temp;
			continue;
		} else
		{
			x = false;
		}
	}
	printf("%ld\n", sum);
}
