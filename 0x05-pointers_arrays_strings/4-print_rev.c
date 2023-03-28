#include "main.h"
/**
 * print_rev - prints in reverse and a new line
 * @s: string
 * Return:0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
