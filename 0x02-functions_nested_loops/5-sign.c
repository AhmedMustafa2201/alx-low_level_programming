#include "main.h"
/**
 * print_sign - checks if number is greater, less or equal zero
 * @n: the number to check
 * Return: 1 if n greater than 0, 0if less than, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (-1);
}
