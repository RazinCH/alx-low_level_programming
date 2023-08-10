#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes allocated
 *
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
