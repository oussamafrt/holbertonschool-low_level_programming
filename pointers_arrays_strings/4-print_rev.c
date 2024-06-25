#include "main.h"
/**
 * print_rev - check the code
 * @s: variable to be verified
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	l = i;

	for (l = i - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
