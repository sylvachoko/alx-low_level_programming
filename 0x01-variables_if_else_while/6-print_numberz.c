#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10
 *
 * Description: prints all single digit numbers of base 10 from 0
 *
 * Return: (0)
 */

int main(void)
{
int i;

for (i = 0; i != 10; i++)
putchar(i + '0');
putchar('\n');
return (0);
}

