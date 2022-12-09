#include <stdio.h>
/**
 * main - prints the alphabet in lowercase followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char mn;

	for (mn = 'a'; mn <= 'z'; mn++)
	{
		if (mn != 'e' && mn != 'q')
			putchar(mn);
	}

	putchar('\n');
	return (0);
}
