#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print alphabet in reverse order in small letters'
 *Result: Always 0 (success)
 */
int main(void)
{
	int n = 122;

	while (n >=  97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

