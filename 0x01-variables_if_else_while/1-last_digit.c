#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;

	if (x > 5)
		printf("%s %d is %d and is greater than 5\n", last, n, x);
	else if (x == 0)
		printf("%s %d is %d and is 0\n", last, n, x);
	else if (x < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", last, n, x);
	return (0);
}
