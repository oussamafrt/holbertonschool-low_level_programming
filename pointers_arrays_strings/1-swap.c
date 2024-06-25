#include "main.h"
/**
 * swap_int - check the code
 * @a: variable to be verified
 * @b: variable to be verified
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tempC;

	tempC = *a;
	*a = *b;
	*b = tempC;
}
