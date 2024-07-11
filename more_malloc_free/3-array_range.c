#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min : character to print
 * @max : character to print
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *result;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		result[i] = min + i;

	return (result);
}
