#include "main.h"
/**
 * print_alphabet_x10 - 'Print the alphabet 10 times'
 * Result:void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
