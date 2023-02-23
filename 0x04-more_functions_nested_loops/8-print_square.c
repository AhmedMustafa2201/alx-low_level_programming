#include "main.h"

/**
* print_square - prints a square
* @size: size of square
* Return: none
**/

void print_square(int size)
{
	int k, c;

	if (size <= 0)
		_putchar('\n');
	for (k = 0; k < size; k++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
