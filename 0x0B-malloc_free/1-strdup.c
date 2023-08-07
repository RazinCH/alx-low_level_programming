#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copy of the string given as a parameter
 *
 * @str: string to be duplicated
 *
 * Return: NULL (Error), pointer to the duplicated string (Success)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
