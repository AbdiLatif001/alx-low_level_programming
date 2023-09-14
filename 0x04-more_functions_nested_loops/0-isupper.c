#include  "main.h"
/**
 *_isupper - Checks for uppercase character
 *Description: 'Finds lower and uppercase characters'
 *@c: shows the uppercase character
 *Return: returns 1 for uppercase character or 0 for anything else
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
