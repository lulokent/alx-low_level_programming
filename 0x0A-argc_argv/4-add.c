#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - Prints the sum of positive numbers
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *k;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			k = argv[i];
		for (j = 0; j < strlen(k); j++)
		{
		if (k[j] < 48 || k[j] > 57)
		{
			printf("Error\n");
			return (1);
		}
		}
			sum += atoi(k);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
