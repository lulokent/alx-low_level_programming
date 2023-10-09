#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int m;
for (n = '0'; n < '9'; n++)
{
for (m = n + 1; m <= '9'; m++)
{
if (m != n)
{
putchar(n);
putchar(m);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
