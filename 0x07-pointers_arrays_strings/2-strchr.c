#include "main.h"
#include "stdio.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; *(s + k); k++)
	{
		if (*(s + k) == c)
			return (s + k);
	}
	if (*(s + k) == c)
		return (s + k);
	return (0);
}
