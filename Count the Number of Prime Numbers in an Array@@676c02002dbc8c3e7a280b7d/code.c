#include <stdio.h>
int prime(int a)
{
    for(int j=2;j<a;j++)
    {
         if(a%j==0)
        {
            return flag=1;
        }
    }
    return flag=0;
}
int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        prime(arr[i]);
        if(flag==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}