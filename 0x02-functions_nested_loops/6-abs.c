#include <stdio.h>
#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer.
 *
 * @n: function that computes the absolute value of an integer.
 *
 * Return: absolute value of int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
