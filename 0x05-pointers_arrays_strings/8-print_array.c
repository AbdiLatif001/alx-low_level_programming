#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: input of array
 * @n: length of array
 *Return: always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf('\n');
}
