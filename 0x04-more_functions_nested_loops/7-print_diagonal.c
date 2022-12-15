#include "main.h"

/**
  * print_diagonal - print slash
  * @n: params
  */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < 1; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
