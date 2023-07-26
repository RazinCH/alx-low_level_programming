#include "main.h"

/**
 * *_strncat - concatenates n bytes of  two strings
 *
 * @dest: string to append to
 *
 * @src: string to add
 *
 * @n: number of bytes of str
 *
 * Return: Pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, p;

	m = 0;
	p = 0;

	while (dest[m] != '\0')
		m++;

	while (src[p] != '\0' && p < n)
	{
		dest[m] = src[p];
		m++;
		p++;
	}

	dest[m] = '\0';

	return (dest);
}
