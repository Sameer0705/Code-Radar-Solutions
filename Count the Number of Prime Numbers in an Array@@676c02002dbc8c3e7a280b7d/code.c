#include <stdio.h>
int prime(int a)
{
    for(int j=2;j<a;j++)
    {
         if(a%j==0)
        {
            return 1;
        }
    }
    return 0;
}
int main() {
    int a,arr[100],count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(prime(arr[i])==0);
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}