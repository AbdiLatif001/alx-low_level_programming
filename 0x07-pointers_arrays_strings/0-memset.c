#include "main.h"
/*
 * *_memset - Fills the memory with a constant byte
 * @s: string
 * @b: value required
 * @n: number of bytes
 * Return: changed value with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		i--;
	}
	return (s);
}
