#include "main.h"
#include <stdio.h>
/**
  * abs - computes the absolute value of an integer
  * @n: the int to be operated upon
  * Return: returns an unsigned int value to calling function
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
