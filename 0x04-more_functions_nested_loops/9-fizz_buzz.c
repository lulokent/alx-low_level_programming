#include<stdio.h>
#include "main.h"

/**
 * main - Prints the numbers from 1 to 100,but for multiplies of three,
 * Fizz is printed instead of the number, and for the multiplies of five,
 * Buzz and for multiplies for both three and five, FizzBuzz
 * Return : void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
}
