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
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

