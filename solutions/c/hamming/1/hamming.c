#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
    int j=0;
    size_t i=0;
    
    if(strlen(lhs) != strlen(rhs))
    {
        return -1;
    }
    
    while(i<strlen(lhs))
    {
        if (lhs[i] != rhs[i])
        {
            j++;
        }
    i++;
    }

    return j;
}