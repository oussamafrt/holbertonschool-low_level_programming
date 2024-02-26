#include "main.h"

/**
 * print_square - Entry point
 *@size : character to be verified
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int i, u;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (u = 1 ; u  <= size ; u++)
			{
				_putchar ('#');
			}
				_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}

