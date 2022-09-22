#include <stdio.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n && src[co] != '\0'; co++)
	{
		dest[i + co] = src[co];
		dest[i + co] = '\0';

		return (dest);
	}
