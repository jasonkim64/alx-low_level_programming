#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * REturn 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of char: %lu byte(s)\n", (unsigned long)
sizeof(a));
printf("size of char: %lu byte(s)\n", (unsigned long)
sizeof(b));
printf("size of char: %lu byte(s)\n", (unsigned long)
sizeof(c));
printf("size of char: %lu byte(s)\n", (unsigned long)
sizeof(d));
printf("size of char: %lu byte(s)\n", (unsigned long)
sizeof(f));
return (0);
