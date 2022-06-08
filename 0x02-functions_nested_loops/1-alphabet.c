#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char ch;
	printf("\nLowercase characters : \n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c ", ch);
	}
	return (0);
}
