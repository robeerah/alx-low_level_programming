#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of line.
 * Return: no return.
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 1; y < (size - 1); y++)
			_putchar(' ');
		for (y--; y < size; y++)
			_putchar(35);
		if (x < (size - 1))
			_putchar('\n');
}
_putchar('\n')
}
