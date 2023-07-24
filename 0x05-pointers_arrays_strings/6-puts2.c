#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * followed by a new line
 *
 * @str: string to print the char
 */

void puts2(char *str)
{
	int len, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (n = 0; n < len; n += 2)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
