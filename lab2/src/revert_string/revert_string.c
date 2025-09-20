#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
    int len = strlen(str), i = 0;
    int j = len - 1;
    
    while (i < j) {
        char tot = str[i];
        str[i] = str[j];
        str[j] = tot;
        i++;
        j--;
    }
}

