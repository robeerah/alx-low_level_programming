#include "main.h"

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */
int main(void)
{
	long int n, xy;

	n = 612852475143;
	for (xy = 2; xy <= n; xy++)
	{
		if (n % xy == 0)
		{
			n /= xy;
			xy--;
		}
	}
	printf("%ld\n", xy);
	return (0);
}
