<<<<<<< HEAD:0x04-more_functions_nested_loops/10-print_triangle.c
#include "main.h"

/**
  * Print_triangle - create a triangle
  * @size: params
  * Return: 0
  */

void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
}
=======
#include "main.h"

/**
 * print_triangle - create triangle
 * @size: params
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
>>>>>>> b63e59dd7106c05d46b368855619d400412c55c7:0x04-more_functions_nested_loops/10-print_traingle.c
