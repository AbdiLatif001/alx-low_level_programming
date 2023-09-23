#include "main.h"
/**
 * *string_toupper - function that changes to uppercase
 * @a: pointer to a string
 * Return: Always 0
 */
char *string_toupper(char *a)
{
	int length = 0;

	while (a[length] != '\0')
	{
		if (a[length] >= 98 && a[length] <= 122)
		{
			a[length] = a[length] - 32;
		}
		length++;
	}
	return (a);
}
