#include "main.h"

/**
 * print_times_table -  Prints the n times table, starting with 0.
 *
 * @n: number of times table
 */
void print_times_table(int n)
{
	int m, p, q;

	if (n >= 0 && n < 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (p = 0; p <= n; p++)
			{
				q = m * p;
				if (p == 0)
				{
					_putchar(q + '0');
				} else if (q < 10 && p != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + q);
				} else if (q >= 10 && q < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (q / 10));
					_putchar('0' + (q % 10));
				} else if (q >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (q / 100));
					_putchar('0' + (q / 10) % 10);
					_putchar('0' + (q % 10));
				}
			}
			_putchar('\n');
		}
	}
}

