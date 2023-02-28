#include "main.h"
#include <string.h>

/**
 * puts2 - prints ever character of a string
 * @str: pass in a string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
