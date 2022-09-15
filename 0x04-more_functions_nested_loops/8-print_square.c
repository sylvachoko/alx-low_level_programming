#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int k, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= size; k++)
		{
			_putchar('#');
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

