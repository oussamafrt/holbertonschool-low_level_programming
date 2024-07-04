#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, a;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		char *arg_act = argv[i];

		while (*arg_act != '\0')
		{
			if (!isdigit(*arg_act))
			{
				printf("Error\n");
				return (1);
			}
			arg_act++;
		}
		a = atoi(argv[i]);
		result += a;
	}
	printf("%d\n", result);
	return (0);
}
