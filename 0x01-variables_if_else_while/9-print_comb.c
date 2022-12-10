#include <stdio.h>
/*
 * main - Entry
 * author: dannie
 * Return: Always 0 (success)
 */
int main(void)
{
	int dannie;

	for (dannie = 48 ; dannie < 58 ; dannie++)
	{
		putchar(dannie);
		if (dannie != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
