#include <stdio.h>


/**
 * main - prints alpha in lower and upper case
 * Return: Always 0 (Success)
 */


int main(void)
{
	char mn;

	for (mn = 'a'; mn <= 'z'; mn++)
		putchar(mn);

	for (mn = 'A'; mn <= 'Z'; mn++)
		putchar(mn);

	putchar('\n');
	return (0);
}
