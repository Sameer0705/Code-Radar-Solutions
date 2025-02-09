#include <stdio.h>
int isPrime(int a)
{
    if(a<1)
    {
        return 0;
    }
    for(int j=2;j<a;j++)
    {
        if(a%j==0)
        {
            return 0;
        }
    }
    return 1;
}
