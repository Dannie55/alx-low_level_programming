#include "main.h"

/**
  * print_sign - return 0 letter not lowercase, 1 letter case
  *
  * @n: check number
  * Return: 0 or 1
  */
int print_sign(int n)
{
	int dan;

	if (n > 0)
	{
		dan = 1;
		_putchar ('+');
	}
	else if (n == 0)
	{
		dan = 0;
		_putchar('0');
	}
	else
	{
		dan = -1;
		_putchar('-');
	}
	return (dan);
}
