#include "main.h"

/**
* print_diagonal - prints diagonal line on the terminal
*@n: numbers of lines and columns
* Return: none
**/

void print_diagonal(int n)
{
	int i, c;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c <= i; c++)
		{
			if (c != i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}

		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
