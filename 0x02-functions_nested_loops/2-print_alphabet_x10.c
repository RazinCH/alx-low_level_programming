#include "main.h"

/**
 * print_alphabet_x10 - Enter code x10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{

	char y;
	int x;

	x = 0;

		while (x < 10)

		{
			y = 'a';

			while (y <= 'z')
			{
				_putchar(y);
				y++;
			}
			_putchar('\n');
			x++;
		}

}

