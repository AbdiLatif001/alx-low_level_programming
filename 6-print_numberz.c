#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print one to ten'
 *Result: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		putchar(48 + n);
	}
	putchar('\n');
	return (0);
}
