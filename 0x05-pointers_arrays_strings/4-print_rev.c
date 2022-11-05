#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *print_rev - Prints a reserve string
 *@s: parameter
 *Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
