#include "main.h"

/**
  * _isigit - checks for digits
  * @c: parameter
  * Return: 0 or 1
  */

int _isdigit(int c)
{
	if (c >= 58 && c < 68)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
