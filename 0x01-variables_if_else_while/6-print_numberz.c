#include<stdio.h>

/**
 * main - Prints all single digit number of base 10
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
