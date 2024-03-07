#include <stdio.h>

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
	int i;

	for (i = 0 ; argv[i] != NULL ; i++)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}

