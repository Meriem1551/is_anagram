#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_anagram(char t[], char m[], unsigned int len)
{
    unsigned int i, j, count = 0;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (t[i] == m[j])
            {
                count++;
            }
        }
    }
    if (count == len)
    {
        return 1;
    }
    // code
}