#include "main.h"

/**
 * _ strcpy - copy a string
 * @dest: Destination value
 * @src: source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\n';
	return (dest);
}
