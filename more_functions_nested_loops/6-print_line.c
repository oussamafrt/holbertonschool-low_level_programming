#include "main.h"

/**
 * print_line - Entry point
 *@n : character to be verified
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
