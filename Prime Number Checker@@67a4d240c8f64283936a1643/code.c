#include <stdio.h>

int prime(int a)
{
    for(int j=2;j<a;j++)
    {
        if(a%j==0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d\n",&num);
        printf("%d\n",isprime(num))
    }
    return 0;
}