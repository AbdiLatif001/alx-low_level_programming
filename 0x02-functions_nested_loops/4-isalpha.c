#include "main.h"
/**
 *_isalpha - Shows if the input is an alphabet or not
 *@c: The  character in ASCII code
 *Return: 1 for letter. 0 for rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
