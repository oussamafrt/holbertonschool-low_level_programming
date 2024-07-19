#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The multipication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: The forst integer
 * @b: The second integer
 * Return: The division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the modulus of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
