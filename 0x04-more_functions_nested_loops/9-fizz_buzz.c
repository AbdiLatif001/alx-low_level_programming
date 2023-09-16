#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 *Description: 'prints number'
 *Fizz for multiple of 3,Buzz for multiple of 5;
 *Fizbuzz for multiple of both
 *Return:always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("Fizzbuzz");
		if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
