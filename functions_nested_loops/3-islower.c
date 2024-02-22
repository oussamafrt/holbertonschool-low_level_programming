#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: character to be verified
 *
 * Return: 1 (success) O (fail)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
