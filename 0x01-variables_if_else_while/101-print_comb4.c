#include <stdio.h>

/**
 * main - alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, n, m;

	for (l = 0; l <= 7; l++)
	{
		for (n = 1; n <= 8; n++)
		{
			for (m = 2; m <= 9; m++)
			{
				if (m > n && n > l)
				{
					putchar(l + '0');
					putchar(n + '0');
					putchar(m + '0');
					if (l != 7 || n != 8 || m != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
