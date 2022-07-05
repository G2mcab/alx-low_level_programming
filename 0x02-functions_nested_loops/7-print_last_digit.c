#include "main.h"
/**
 * print_last_digit - displays last digit
 *
 * @n: input number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int rem;

	if (n < 0)
	{
		n = -1 * n;
	}
	rem = n % 10;

	_putchar(rem + '0');
	return (rem);
}
