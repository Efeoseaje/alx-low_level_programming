#include "main.h"

/**
 *puts_half - function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 */
void puts_half(char *str)
{
	int len = 0, half, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (half = (len + 1) / 2; half < len; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
