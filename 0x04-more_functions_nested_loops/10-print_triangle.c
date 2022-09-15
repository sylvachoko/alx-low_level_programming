#include <stdio.h>
#include "main.h"

/**
 * print_triangle - a function that prints a tiangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int a, b, t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b <= (size - 1); b++)
		{
			for (a = 0; a < (size - 1) - b; a++)
			{
				_putchar(' ');
			}
			for (t = 0; t <= b; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

