#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);

}

