#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num[] = "_putchar";
	int ad;

	for (ad = 0; ad < 8; ++ad)
		_putchar (num[ad]);

	_putchar('\n');

	return (0);
}
