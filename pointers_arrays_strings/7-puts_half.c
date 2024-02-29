#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str: character to be print
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int l, n, i;

	l = 0;

	while (str[l] != 0)
	{
		l++;
	}
	if (l % 2 == 1)
	{
		n = (l - 1) / 2;
	}
	else
	{
		n = l / 2;
	}

	for (i = n + 1 ; i < l ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
