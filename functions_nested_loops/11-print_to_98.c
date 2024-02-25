#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: character to be verified
 *
 * Return: absolute value
 */

void print_to_98(int n)
{
	int i;

	{
	for (i = n ; i <= 98 ; i++)
	{
		printf("%d, ", i);
	}
	for (i = n ; i >= 98 ; i--)
	{
		printf("%d, ", i);
	}
	for (; i == 98 ;)
	{
		printf("%d", i);
		break;
	}

	printf("\n");
	}
}
