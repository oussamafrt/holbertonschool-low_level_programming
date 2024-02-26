#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: absolute value
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
	if (a == 2)
	{
		continue;
	}
	if (a == 4)
	{
		continue;
	}
	else
	{
		_putchar ('0' + a);
	}
	}
	_putchar ('\n');
}
