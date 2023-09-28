#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: string to be printed
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\n')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
