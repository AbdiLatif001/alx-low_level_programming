#include "main.h"
/**
 * print_rev - prints the reversed number
 * @s: string to be printed
 * Return: Always 0
 */
void print_rev(char *s)
{
	int new = 0;

	while (s[new])
		new++;
	while (new--)
		_putchar(s[new]);
	_putchar('\n');
}
