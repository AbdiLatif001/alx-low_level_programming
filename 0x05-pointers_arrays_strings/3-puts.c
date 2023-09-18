#include "main.h"
/**
 * _puts - prints the string
 * @str: points to the string
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
