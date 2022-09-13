#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase 10 times
 *
 * Description: a program that prints the alphabet in lowercase 10 times
 *
 * Return: (0)
 */

int main(void)
{
char ch = 'a';
int j = 0;

while (j < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
j++;
}
return (0);
}

