#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n;
	int j;

	for (n = 0; n <= 9; n++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
