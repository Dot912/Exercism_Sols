#include "binary.h"
#include <string.h>

int convert(const char *input)
{
    
    if(input == NULL || strlen(input) == 0)
    {
        return -1;
    }
    
    size_t i=0;
    int num=0, power=1;

    while(i<strlen(input))
    {
        if(input[i] == '1' || input[i] == '0')
        {
        
        num += power*(input[strlen(input) - i -1]- '0');
        power *= 2;
        i++;
            
        }
        
        else 
        {
            return -1;
        }
    }
    
    return num;
}