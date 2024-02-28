#include "main.h"

/**
 * _puts - Entry point
 * @s: charater to print
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int l, i;
	l = 0;

	while (s[l] != '\0')
	{
		l += 1;
	}
	i = l;

	for (i = l - 1 ; i >= 0 ; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
