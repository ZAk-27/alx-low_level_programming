#include "main.h"

/**
 * print_diagonal - print a straight line using putchar of n size
 * @n: size of line
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		if (n > 0)
		{
			j = 0;
			while (j <= i - 1)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
