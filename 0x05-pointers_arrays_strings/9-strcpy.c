#include "main.h"
/**
 *_strcpy - function that copies string
 * @dest: char type string
 * @src: char type string
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
