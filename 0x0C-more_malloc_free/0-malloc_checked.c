#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int to allocate
 * Return: pointer to the memory or terminate if error
 */

void *malloc_checked(unsigned int b)
{
int *a = malloc(b);
if (a == 0)
	exit(98);

return (a);
}
