#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argv: Array of argument
 * @argc: Size of argument
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int result;
	int a;
	int b;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	else
		printf("Error\n");

	return (0);
}
