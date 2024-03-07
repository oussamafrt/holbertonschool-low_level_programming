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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

