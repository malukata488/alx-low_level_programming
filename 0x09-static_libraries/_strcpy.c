#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
