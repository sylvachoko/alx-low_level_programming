#include <stdio.h>
#include "main.h"

/**
 * _islower -  function that checks for lowercase character.
 *
 * @c: function that checks for lowercase character.
 *
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

