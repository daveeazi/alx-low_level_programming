#include <stdio.h>



/**
 *
 *  * main - start of execution
 *
 *   * Return: zero
 *
 *    */



int main(void)

{

		char index;



			for (index = 'a'; index <= 'z'; index++)

					{

								if (index == 'q' || index == 'e')

											continue;

										putchar(index);

											}

				putchar('\n');

					return (0);



}
