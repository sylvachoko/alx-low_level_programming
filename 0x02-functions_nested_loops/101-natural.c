#include <stdio.h>
/**
 * main - computes and prints the num of all the multiples
 * of 3 or 5 below 1024
 * Return: (0)
 */
int main(void)
{
	int num3 = 0, num5 = 0, num = 0;
	int i;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			num3 = num3 + i;
		} else if ((i % 5) == 0)
		{
			num5 = num5 + i;
		}
	}
	num = num3 + num5;
	printf("%d\n", num);
	return (0);
}