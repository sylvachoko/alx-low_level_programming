#include <stdio.h>
#include "main.h"

/**
 * _isalpha -  function that checks for alphabets.
 *
 * @c: function that checks for alphabetic character.
 *
 * Return: 1 if lowercase, 0 if uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
