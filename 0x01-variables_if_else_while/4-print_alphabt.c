#include <stdio.h>

/**
 * main - Entry point
 * author: IamNaeto
 * Return: Always 0 (Success)
 */
int main(void)
{
	char danny;

	for (danny = 'a' ; danny <= 'z' ; danny++)
	{
		if (danny != 'q' && danny != 'e')
			putchar(danny);
	}
	putchar('\n');
	return (0);
}
