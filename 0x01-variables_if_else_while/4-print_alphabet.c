#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase
 *
 * Description: a program that prints the alphabet in lowercase except q & e
 *
 * Return: (0)
 */

int main(void)
{
char ch = 'a';

if (ch != 'q' || ch != 'e')
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}

