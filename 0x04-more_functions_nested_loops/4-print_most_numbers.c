#include "main.h"
/**
 *print_most_numbers - Prints numbers from zero to nine
 *Return: always 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '0' || c == '4'))
		_putchar(c);
	}
	_putchar('\n');
}
