#include "main.h"
/**
 *swap_int - function that swaps two numbers
 *@a: swaps and stores adress of a to b
 *@b: swaps and stores adress of b to a
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int result;

	result = *b;
	*b = *a;
	*a = result;
}
