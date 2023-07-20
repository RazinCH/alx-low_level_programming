#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, p;

		for (m = 0; m < n; m++)
		{
			for (p = 0; p < n; p++)
			{
				if (m == p)
					_putchar('\\');
				else if (p < m)
					_putchar(' ');
			}
			_putchar('\n');
		}

	}
}
