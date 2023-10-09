#include "main.h"
#include <stdlib.h>
/**
 *  *_strdup - duplicates the string
 *  @str:char
 *  Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int a = 0, i = 1;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char) * i) + 1;)
	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}

