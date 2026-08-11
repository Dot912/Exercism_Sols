#include "collatz_conjecture.h"

int steps(int start)
{
    int i=0;
    
    if(start<1)
    {
        return -1;
    }
    
    else
    {
    while (start!=1)
    {
        if(start%2==0)
        {
            start = start/2;
            i++;
        }
        else
        {
            start = start*3 + 1;
            i++;
        }
    }
        return i;
    }
}