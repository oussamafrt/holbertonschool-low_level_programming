#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i =  0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
