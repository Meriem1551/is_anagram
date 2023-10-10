#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_anagram(char t[], char m[], unsigned int len1, unsigned int len2)
{
    unsigned int i, j, count = 0;
    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            for (j = 0; j < len2; j++)
            {
                if (t[i] == m[j])
                {
                    count++;
                }
            }
        }
        if (count == len1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    // code
}