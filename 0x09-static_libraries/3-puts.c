#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
