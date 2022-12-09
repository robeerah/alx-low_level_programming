#include <stdio.h>

/**
 * main - prints the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char mn;

	for (mn = 'z'; mn >= 'a'; mn--)
		putchar(mn);

	putchar('\n');

	return (0);
}
