#include "main.h"

/**
 * swap_int - Entry point
 * @a: character to be verified
 * @b: character to be verified
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
