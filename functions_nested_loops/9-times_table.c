#include "main.h"

/**
   * times_table - Entry point
 *
 * Return: absolute value
 */

void times_table(void)
{
	int a, b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (b != 0)
			{
				if (a * b < 10)
				{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar ('0' + a * b);
				}
			if (a * b > 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + a * b / 10);
				_putchar ('0' + a * b % 10);
			}
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar ('\n');
	}
}
