#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_ putchar(*str);
	}
	_putchar('\n');
}

