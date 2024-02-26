#include "main.h"

/**
 * print_triangle - Entry point
 *@seize : character to be verified
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, u;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (u = 1 ; u  > i ; u--)
			{
				_putchar (' ');
			}
			_putchar ('#');
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}

