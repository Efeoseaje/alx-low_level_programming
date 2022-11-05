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
	int i = 0, j, len = 0;

	while (s[i] != '\0')
		len++;
	for (j = len - 1; s[j] != '\0'; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
