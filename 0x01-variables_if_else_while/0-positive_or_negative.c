#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Author - Daniel
 * Date - 09-12-2022
 * Details: A program that prints +ve, Zero and -ve results of random number
 * Return: 0 (success)
 */
int main(void)
{
	int n;


	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
