#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{ 
	printf("%d is positif\n",n);
	}
	if (n < 0) 
	{
	printf("%d is negatif\n",n);
	}
	if (n == 0)
	{
	printf("%d is zero\n",n);
	}

	return (0);
}
