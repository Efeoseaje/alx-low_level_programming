#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: It prints the word _putchar, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');
	return (0);
}
