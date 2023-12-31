#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array to create
 *
 * @c: char to initialize the array c
 *
 * Return: NULL (Error), pointer to the array (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	n = (char *) malloc(sizeof(char) * size);

	if (n == NULL)
		return (0);

	while (i < size)
	{
		*(n + i) = c;
		i++;
	}

	*(n + i) = '\0';

	return (n);
}
