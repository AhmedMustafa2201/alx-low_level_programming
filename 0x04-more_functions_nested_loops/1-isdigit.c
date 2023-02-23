# include "main.h"

/**
 * _isdigit - checks for digit value.
 * @c: the ascii char number
 * Return: int
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
