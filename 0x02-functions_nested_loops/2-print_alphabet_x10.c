#include "main.h"
/**
 * print_alphabet_x10 - prints print_alphabet_x10
 *
 * Return nothing
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
