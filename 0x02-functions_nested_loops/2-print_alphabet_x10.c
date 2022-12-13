#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int show;
	char la:

		for (show = 0; show <= 9; show++)
		{
			for(la = 'a'; la <= 'z'; la++)
				_putchar(la);
			_putchar('\n')
		}
}
