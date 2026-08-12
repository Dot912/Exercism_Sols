#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int number)
{
    int count = 0;
    
    while (number > 0)
    {
        if (number & 1)
        {
            count++;
        }
        number = number >> 1;
    }
    
    return count;
}
