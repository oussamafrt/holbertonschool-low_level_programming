#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b : character to print
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *result = malloc(sizeof(int) * b);

	if (result == NULL)
		exit(98);

	return (result);
}
