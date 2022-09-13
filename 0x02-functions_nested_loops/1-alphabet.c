#include <stdio.h>
#include "main.h"

/**
 * print_alphabet -  prints the alphabet in lowercase
 *
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: (0)
 */

void print_alphabet(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}

