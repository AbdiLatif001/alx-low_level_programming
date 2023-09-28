#include "main.h"
/**
 * factorial - gives factorial of any number
 * @n: number to return factorial from
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

