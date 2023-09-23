#include "main.h"
/**
 * *cap_string - capitalises all words of a string
 * @a: pointer to a string
 * Return: always 0
 */
char *cap_string(char *a)
{
	int length = 0;

	while (a[length] != '\0')
	{
		if (a[length] <= 97 && a[length] <= 122)
		{
			a[length] = a[length] - 32;
		}
		if (a[length] == ' ' || a[length] == '\t' || a[length] == '\n'
			|| a[length] == ',' || a[length] == '.' || a[length] == ';'
			|| a[length] == '!' || a[length] == '?' || a[length] == '"'
			|| a[length] == '(' || a[length] == ')' || a[length] == '{' || a[length] == '}')
		{
			if (a[length + 1] >= 97 && a[length + 1] <= 122)
			{
				a[length + 1]= a[length + 1] - 32;
			}
		}
		length++;
	}
	return (a);
}


