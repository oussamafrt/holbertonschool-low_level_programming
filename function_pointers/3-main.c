#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: 0 on success, or another value on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	char *operator;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	calc = get_op_func(operator);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = calc(num1, num2);
	printf("%d\n", result);
	return (0);
}
