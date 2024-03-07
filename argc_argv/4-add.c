#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int a;
	int result;

	if (argc > 2)
	{
		printf("0\n");
	}
	for (i = 0 ; i < argc ; i++)
	{
		char *arg_act = argv[i];

			while (*arg_act != '\0')
			{
				if (!isdigit(*arg_act))
				{
					printf("Error\n");
					return 1;
				}
			arg_act++;
			}
		a = atoi(argv[i]);
		result += a;
		printf("%d", result);
	}
	return 0;
}
