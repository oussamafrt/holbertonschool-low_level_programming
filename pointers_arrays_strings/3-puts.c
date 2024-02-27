#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @str: charater to print
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int a;

	a = '\0';
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
		_putchar('\n');
}
