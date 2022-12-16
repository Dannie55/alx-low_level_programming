#include "main.h"


/**
 * print_line - a function that draws a straight line in the terminal
 * @n: param
 */


void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
