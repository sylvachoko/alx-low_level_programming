#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int k = 0;
	int i;

	while (s[k] != '\0')
		k++;

	for (i = 0; i < k; i++)
	{
		k--;
		rev = s[i];
		s[i] = s[k];
		s[k] = rev;
	}
}

