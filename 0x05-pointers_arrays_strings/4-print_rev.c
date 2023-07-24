#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int n, m, len;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	len = n;

	for (m = len - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}

	_putchar('\n');
}
