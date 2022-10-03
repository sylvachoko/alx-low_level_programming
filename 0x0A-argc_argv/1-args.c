#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
(void)argv;
printf("%i\n", argc - 1);
return (0);
}