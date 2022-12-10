#include <stdio.h>

/**
 * main - Entry
 * author: daniel
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dannie;

	for (dannie = 'z' ; dannie >= 'a' ; dannie--)
		putchar(dannie);
	putchar('\n');
	return (0);
}
