#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int m;
int d;
for (n = '0'; n < '9'; n++)
{
for (m = n + 1; m <= '9'; m++)
{
for (d = m + 1; d <= '9'; d++)
if ((m != n) != d)
{
putchar(n);
putchar(m);
putchar(d);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
