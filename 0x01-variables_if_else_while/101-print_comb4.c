#include <stdio.h>
/**
 * main - prints numbers from 00 to 99
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '0')
	{
		while (j <= '1')
		{
			while (k <= '2')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '0' && j == '1' && k == '2'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = '0';
		}
		j - '0';
	}
	putchar('\n');
	return (0);
}
