#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: character to be verified
 *
 * Return: 1 (success) O (fail)
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
