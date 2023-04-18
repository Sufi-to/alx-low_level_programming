#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if number of arguments is not exactly 2
 *
*/
int main(int argc, char *argv[])
{
	int x;
	int i;

	i = 0;
	x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x =  atoi(argv[1]);
	if (x <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (x > 0)
	{
		if (x >= 25)
			x = x - 25;
		else if (x >= 10)
			x = x - 10;
		else if (x >= 5)
			x =  x - 5;
		else if (x >= 2)
			x = x - 2;
		else if (x >= 1)
			x = x - 1;

		i += 1;
	}
	printf("%d\n", i);
	return (0);
}
