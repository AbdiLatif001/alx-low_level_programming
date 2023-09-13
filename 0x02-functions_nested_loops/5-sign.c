#include "main.h"
/**
 *print_sign -determines if the input is greater,less or equal to zero
 *@n: input number as an integer
 *Return: 1 is greter zero.0 is equal and -1 less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_puchar(48);
		return (0);
	}
	_putchar('\n');
}
