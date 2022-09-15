#include "main.h"

/**
 * _isupper- Checks for uppercase characters
 * @c: character to be checked
 *
 * Return: 1 for uppercase, 0 if not
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
		return (1);
	return (0);
}
