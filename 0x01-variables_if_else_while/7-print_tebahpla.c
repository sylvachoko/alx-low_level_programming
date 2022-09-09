#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase reversed
 *
 * Description: a program that prints the alphabet in lowercase reversed
 *
 * Return: (0)
 */

int main(void)
{
char ch = 'z';
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}

