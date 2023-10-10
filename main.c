#include "main.h"
#include "../Search-algorithms/main.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int l1, l2;
    int res;
    l1 = get_input("Enter the first array's size: ");
    l2 = get_input("Enter the second array's size: ");
    if (l1 != l2)
    {
        res = 0;
    }
    else
    {
        char *c1 = get_string_array("Enter the string as an array", l1);
        char *c2 = get_string_array("Enter the string as an array", l2);
        res = is_anagram(c1, c2, l2);
    }
    printf("%d", res);
}