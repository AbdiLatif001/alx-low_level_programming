#include "main.h"
/**
 * reverse_array - reverses values of an array
 * @a: pointer to an array
 * @n: number of element of an array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;

	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}

