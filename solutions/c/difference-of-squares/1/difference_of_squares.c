#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int n)
{
    unsigned int sum = 0, i;
    
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    return sum *= sum;
}

unsigned int sum_of_squares(unsigned int n)
{
    unsigned int squares = 0, i;
    
    for(i = 1; i <= n; i++)
    {
        squares += i * i;
    }
    
    return squares;
}

unsigned int difference_of_squares(unsigned int n)
{
    return square_of_sum(n) - sum_of_squares(n);
}