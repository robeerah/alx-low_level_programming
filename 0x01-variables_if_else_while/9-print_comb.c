#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
}
