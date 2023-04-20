#include "3-calc.h"
/**
 * main - entry p
*/

int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	operator = get_op_func(argv[2]);

	x =  atoi(argv[1]);
	y = atoi(argv[3]);
	printf("%d\n", operator(x, y));
	return (0);
}
