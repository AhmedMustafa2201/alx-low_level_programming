#include "main.h"
/**
 * print_alphabet - prints print_alphabet(void)
 *
 * Return nothing
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
