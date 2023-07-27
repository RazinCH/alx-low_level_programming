#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 *
 * @s: string to be encoded
 *
 * Return: Result string
 */

char *rot13(char *s)
{
	int n, m;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; a[m] != '\0'; m++)
		{
			if (s[n] == a[m])
			{
				s[n] = b[m];
				break;
			}
		}
	}

	return (s);
}
