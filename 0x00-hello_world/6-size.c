#include <stdio.h>
/**
 * main - print various types and their sizes
 * Description - to print the sizes of various datatypes
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));

	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}

