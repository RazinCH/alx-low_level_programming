#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = '0'; n <= '8'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);

		if (n != '8' || m != '9')
		{
			putchar(',');
			putchar(' ');
		}
		}
	};

	putchar('\n');
	return (0);
}

