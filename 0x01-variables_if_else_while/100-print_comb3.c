#include <stdio.h>

/**
 * main - start of execution
 * 
 * Return: zero
 */

int main(void)
{
	int i, j;
	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if ((j == 9) && (i == 8))
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
