#include <stdio.h>

/**
 * main -   prints all possible combinations of single-digit numbers
 *
 * Description:  prints all possible combinations of single-digit numbers
 *
 * Return: (0)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

