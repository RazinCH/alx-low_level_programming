#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of a program
 *
 * @argc: number of arguments
 *
 * @argv: arrays of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
