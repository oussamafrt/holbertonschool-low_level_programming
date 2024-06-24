#include "main.h"
/**
 * print_square - Entry point
 * @size: variable to be verified
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
