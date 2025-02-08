#include <stdio.h>

void prime(int arr[],int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                arr[i]=0;
            }
        }
        if(arr[i]!=0)
        {
            arr[i]=1;
        }
    }
}
int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    prime(arr,a);
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}