#include "main.h"
#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100, followed by a new line
 *
 *for multiples of three print Fizz
 *
 *for the multiples of five print Buzz
 *
 *For numbers which are multiples of both three and five print FizzBuzz
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
