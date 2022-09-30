#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1;
int l = 0;
	char x = s[0];

	while (x != '\0')
	{
		l++;
		x = s[i++];
	}
	return (l);
}

