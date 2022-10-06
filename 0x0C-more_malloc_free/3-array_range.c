#include <stdio.h>
#include "main.h"

/**
 * *array_range -  create an array of integers
 * @min: size of the array
 * @max: char to initialize
 * Return: pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
int *a;
int b;

if (min > max)
	return (NULL);

a = malloc((max - min + 1) * sizeof(int));

if (a == 0)
	return (NULL);


for (b = 0; min + b <= max; b++)
	a[b] = min + b;

return (a);
}
