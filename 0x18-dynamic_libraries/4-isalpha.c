#include "main.h"

/**
 * _isalpha- check the code
 * @c: integer input
 * Description- the code checks if the letter c is lowercase or uppercase
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
