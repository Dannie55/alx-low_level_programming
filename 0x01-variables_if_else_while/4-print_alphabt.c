#include <stdio.h>

/**
 * main - Entry
 * author: daniel
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char dannie;

	for (dannie = 'a' ; dannie <= 'z' ; dannie++)
	{
		if (dannie != 'q' && dannie != 'e')
			putchar(dannie);
	}
	putchar('\n');
	return (0);
}
