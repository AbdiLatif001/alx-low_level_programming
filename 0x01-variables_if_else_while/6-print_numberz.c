#include <stdio.h>
/**
 *main- Entry point
 *Description:'print numbers from one to ten'
 *Return: always zero (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
