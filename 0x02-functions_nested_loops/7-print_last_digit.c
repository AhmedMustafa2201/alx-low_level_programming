#include "main.h"
/**
 * print_last_digit - return last number for an input number
 * @n: the number to check
 * Return: int
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
