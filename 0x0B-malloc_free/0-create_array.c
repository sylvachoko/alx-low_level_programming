#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
char *A = malloc(size);
if (size == 0 || A == 0)
	return (0);

while (size--)
	A[size] = c;

return (A);
}
