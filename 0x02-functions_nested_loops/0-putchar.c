#include "main.h"
/**
 * main - main function
 * description: prints _putchar
 * Return: 0
 */
int main(void)
{
	char ptcr[] = "_putchar";

	int c = 0;

	while (c < 8)
	{
		_putchar(ptcr[c]);
		c += 1;
	}
	_putchar('\n');
	return (0);
}
