#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the start number
 */
void print_to_98(int n)
{
	int m;

	m = n;
	if (n <= 98)
	{
		while (m <= 98)
		{
			if (m != 98)
			{
				printf("%d, ", m);
			}

			if (m == 98)
				printf("%d\n", i);

			m++;
		}
	}
	else if (n >= 98)
	{
		while (m >= 98)
		{
			if (m != 98)
			{
				printf("%d, ", m);
			}

			if (m == 98)
				printf("%d\n", m);

			m--;
		}

	}
}
