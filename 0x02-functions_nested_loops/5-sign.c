#include <stdio.h>
#include "main.h"

/**
 * print_sign -  function that prints the sign of a number.
 *
 * @n: function that prints the sign of a number.
 *
 * Return: 1 if n is > 0, 0 if n = 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
