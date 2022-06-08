#include "main.h"
/**
 * _abs - a function that computes tha absolute value of the number from zero
 * @ab: integer to be converted.
 * Return: absolute value of the input number
 */
int _abs(int ab)
{
	if (ab < 0)
		ab = ab * -1;
	return (ab);
}
