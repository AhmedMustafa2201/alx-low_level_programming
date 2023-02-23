# include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		int count = 0;

		while (count < 15)
		{
			if (count >= 10)
				_putchar((count / 10) + '0');

			_putchar((count % 10) + '0');
			count++;
		}
		_putchar('\n');
		n++;
	}
	_putchar('\n');
}
