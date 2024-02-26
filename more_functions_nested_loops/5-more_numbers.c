#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: absolute value
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			if (a >= 10)
				_putchar ('0' + a / 10);
			_putchar ('0' + a % 10);
		}
		{
			_putchar ('\n');
		}
	}
}

