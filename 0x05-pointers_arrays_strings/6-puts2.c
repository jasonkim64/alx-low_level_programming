#include "main.h"

/**
 * puts2 - Prints every character of a string
 * @str: The strint to be treated
 * Return:void
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}
	for (i = 0;i > j; i+= 2)
	{
	_Putchar(str[i]);
	}
	_Putchar('\n');
}

