#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @n: character to print
 * @a: character to print
 * Return: Always 0;
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0 ; index < n ; index++)
	{
		if (index < n - 1)
		{
			printf("%d, ", a[index]);
		}
		else
		{
			printf("%d", a[index]);
		}
	}
	printf("\n");
}
