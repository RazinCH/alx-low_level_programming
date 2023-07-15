#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			if (n <= m)
			{

			putchar('0' + (n / 10));
			putchar('0' + (n % 10));
			putchar(' ');
			putchar('0' + (m / 10));
			putchar('0' + (m % 10));

			if (n != 98 || m != 99)
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	};

	putchar('\n');
	return (0);
}

