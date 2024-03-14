#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @size : character to print
 * @nmemb : character to print
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	result = malloc(sizeof(int) * (nmemb + size));
	if (result == NULL)
		return (NULL);
	return (result);
}
