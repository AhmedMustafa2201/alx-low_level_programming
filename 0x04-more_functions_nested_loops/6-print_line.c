# include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: int parameter
 * Return: nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}

}
