#include "main.h"
/**
 *_isdigit - Checks for a digit
 *Description: 'checks for digits between one to ten'
 *@c:determines  integer
 *Return: Returns 1 if its a digit and 0 if anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

