#include "main.h"
/**
 * print_alphabet_x10 - func
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char alph = 'a';

		while (alph <= 'z')
		{
			_putchar (alph);
			alph++;
		}
		_putchar ('\n');
	}
}
