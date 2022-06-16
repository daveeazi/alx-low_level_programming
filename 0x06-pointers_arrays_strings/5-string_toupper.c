#include "stdio.h"

/**
 * string_toupper - a function that changes all lowercase 
 * letters of a string to uppercase
 * @c: input string
 * Return: capitialized string
 */
char *string_toupper(char *c)

{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 'a' - 'A';
	}
	return (c);
}
