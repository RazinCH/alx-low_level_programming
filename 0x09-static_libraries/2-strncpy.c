#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: string destination
 *
 * @src: string source
 *
 * @n: number of bytes to copy
 *
 * Return: Pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;

	while (src[m] != '\0' && m < n)
	{
		dest[m] = src[m];
		m++;
	}

	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
