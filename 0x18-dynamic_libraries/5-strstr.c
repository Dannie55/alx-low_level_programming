#include "main.h"

/**
* _strstr - locate and return pointer to first occurence of substring
* @haystack: string to search
* @needle: target substring to search for
* Return: pointer to index of string at first hole substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle + j))
		{
			j++;
			if (*(needle + j) == '\0')
				return ((haystack + i) - (j - 1));
		}
		else
			j = 0;
		i++;
	}
	if (*needle == '\0')
		return (haystack);
	return (0);
}
