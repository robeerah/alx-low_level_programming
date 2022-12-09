#include <stdio.h>


/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char mn;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (mn = 'a'; mn <=  'f'; mn++)
		putchar(mn);

	putchar('\n');

	return (0);
}
