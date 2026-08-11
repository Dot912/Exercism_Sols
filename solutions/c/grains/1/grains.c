#include "grains.h"

uint64_t square(uint8_t index)
{
    if(index>64 || index<1)
    {
        return 0;
    }
    else
    { 
    uint64_t grains=1, i;

    for(i=1; i<index; i++)
    {
        grains = grains*2;
    }
    
    return grains;
    }
}

uint64_t total(void)
{
    uint64_t total=0, j;

    for(j=1; j<=64; j++)
    {
        total += square(j);
    }

    return total;
}
