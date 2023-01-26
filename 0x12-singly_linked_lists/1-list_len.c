#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - displays the number of elementsof a list
  * @h: a linked list
  *
  * Return
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
