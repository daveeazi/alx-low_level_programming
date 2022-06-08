#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: single letter input
 *
 * Return: 1 if the alphabet is lowercase or uppercase and
 * 0 if the alphabet is otherwise.
 */
int _isalpha(int c)
{
	if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
}
