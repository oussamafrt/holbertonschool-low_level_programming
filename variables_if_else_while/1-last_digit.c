#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, n2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n2 = n % 10;

	if (n2 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n2);
	}
	if (n2 == 0)
	{
		printf("Last digit of %d is %d ans is 0", n, n2);
	}
	if (n2 != 0 && n2 < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n2);
	}
	return (0);
}
