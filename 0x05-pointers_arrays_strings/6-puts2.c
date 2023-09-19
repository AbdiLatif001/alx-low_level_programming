#include "main.h"
/**
 * puts2 - function that prints all the characters
 * @str: String to be printed
 * Return: Always 0
 */
void puts2(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
		p++;
	}
	_putchar('\n');
}

