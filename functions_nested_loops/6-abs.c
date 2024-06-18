#include "main.h"
/**
 * _abs - Entry point
 * @n: character to be verified
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-n);
	}
	return (0);
}
