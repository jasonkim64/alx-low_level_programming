#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be fillesd
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: change arraywith new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
