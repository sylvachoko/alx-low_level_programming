#include <stdio.h>

/**
 * main -  prints the alphabets in lowercase and uppercase
 *
 * Description: a program that prints the alphabet in lowercase and uppercase
 *
 * Return: (0)
 */

int main(void)
{
char ch = 'a';
char bh = 'A';

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (bh = 'A'; bh <= 'Z'; bh++)
putchar(bh);
putchar('\n');
return (0);
}

