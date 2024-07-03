#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: charcter to print
 * @argv: charcter to print
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
