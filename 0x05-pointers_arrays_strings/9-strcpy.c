#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * including the terminating null byte (\0)
 *
 * to the buffer pointed to by dest
 *
 * @dest: pointer to the buffer
 *
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, n;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (n = 0; len > n; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
