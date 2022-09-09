#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: (0)
 */

int main(void)
{
int a = 48;
int b = 48;

	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			putchar(a);
			putchar(b);

			if (a < 56 || b < 57)
			{
				putchar(44);
				putchar(32);
			}
			b++;
		}

		a++;
	}

	putchar(10);

	return (0);
}

