#include "main.h"
/**
 *_islower - Shows if the input is lower case or not
 *@c: The character in ASCII code
 *Return: 1 for the lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
