#include "main.h"
/*
 * *_memset - function that fills memory with constant byte
 * Description: Fills memory with constant byte
 * @s:memory area to be filled
 * @b: value required
 * @n: number of bytes
 * Return: changed value with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		i--;
	}
	return (s);
}
