#include "main.h"
/**
 * _strlen - function that checks lengths
 * @s:string to be checked
 * Return: Always 0
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}

