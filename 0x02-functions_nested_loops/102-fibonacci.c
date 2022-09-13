#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: (0)
 */

int main(void)
{
int i, a = 0, b = 1;
int c = a + b;

for (i = 3; i <= 100; ++i)
{
printf("%d, ", c);
a = b;
b = c;
c = a + b;
}
printf("\n");
return (0);
}
