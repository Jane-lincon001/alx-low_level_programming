#include <stdio.h>

/**
 * main - prints all combinations of single digit numbers
 * Return: always 0 (Success)
 */ 
int main(void)
{
	int n;

	for (n = 48; n < 5; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
