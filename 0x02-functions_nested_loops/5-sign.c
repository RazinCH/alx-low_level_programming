#include "main.h"

/**
 * print_sign - Check code.
 *
 * @n: to check
 *
 * Return: 1 if n > 0 and prints +
 * 0 if n = 0 and prints 0
 * -1 if n < 0 and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

