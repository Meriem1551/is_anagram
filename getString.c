#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *get_string_array(char *s, unsigned int length)
{
    char *c = (char *)malloc(length * sizeof(char));
    if (c == NULL)
    {
        return NULL;
    }
    puts(s);
    for (int i = 0; i < length; i++)
    {
        scanf("%c", &c[i]);
    }
    return c;
}