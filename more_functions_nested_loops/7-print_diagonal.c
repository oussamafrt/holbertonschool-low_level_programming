#include "main.h"

/**
 * print_diagonal - Entry point
 *@n : character to be verified
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, u;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (u = 1 ; u  <= i ; u++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}

