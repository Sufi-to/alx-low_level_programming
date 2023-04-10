#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of 2 numbers'
 * @argc: number of argumets
 * @argv: array of arguments
 * Return: if two arguments are not found print error and return 1
 */
int main(int argc, char **argv)
{
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
