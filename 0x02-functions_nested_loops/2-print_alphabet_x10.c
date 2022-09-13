#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet in lowercase 10 times
 *
 * Description: a program that prints the alphabet in lowercase 10 times
 *
 * Return: (0)
 */

void print_alphabet_x10(void)
{
char ch = 'a';
int j = 0;

while (j < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
j++;
}
}

