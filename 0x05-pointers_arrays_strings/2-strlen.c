#include <stdio.h>

/**
 * _strlen - Return the length of a string.
 * @str: The string to get the lenght of
 * Return: The length of at @str.
 */
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++);
	length++;
	return (length);
}
