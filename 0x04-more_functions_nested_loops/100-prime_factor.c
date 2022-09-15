#include <math.h>
#include <stdio.h>

/**
 * main - finds largest prime factor of the number 612852475143
 * maxPrime - function that finds the prime
 * @n - the long integer
 * Return: max prime
 */

long long maxPrime(long long n)
{
long long mPrime = -1;

while (n % 2 == 0)
{
mPrime = 2;
n >>= 1;
}
while (n % 3 == 0)
{
mPrime = 3;
n = n / 3;
}
for (int i = 5; i <= sqrt(n); i += 6)
{
while (n % i == 0)
{
mPrime = i;
n = n / i;
}
while (n % (i + 2) == 0)
{
mPrime = i + 2;
n = n / (i + 2);
}
}
if (n > 4)
mPrime = n;

return (mPrime);
}

int main(void)
{
long long n = 612852475143;
printf("%lld", maxPrime(n));

return (0);
}

