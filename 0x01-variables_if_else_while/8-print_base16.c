#include <stdio.h>
/**
 * main - Entery point
 * author: dannie
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dannie;
	char ezirim;

	for (dannie = 48 ; dannie < 58 ; dannie++)
		putchar(dannie);
	for (ezirim = 'a' ; ezirim <= 'f' ; ezirim++)
		putchar(ezirim);
	putchar('\n');
	return (0);
}
