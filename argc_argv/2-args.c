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

	if (argc > 0)
		for (i = 0 ; argv[i] != NULL ; i++)
		{
			printf("%s\n", argv[i]);
		}

	return (0);
}

