#include <stdio.h>

int isPrime(int a)
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
    while(t-->0)
    {
        int num;
        scanf("%d\n",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}