#include "main.h"
#include <stdlib.h>
/**
 *  *create_array - creates an array of specific size and assigns it char c
 *  @size:size of array
 *  @c:char to assign
 *  Return: Pointer to array and null if fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
		if (size == 0 || ptr == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
