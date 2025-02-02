#include <stdio.h>
int prime(int arr[],int a)
{
    int count=0;
    for(int i=0;i<a;i++)
    {
        int flag=0;
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            count++;
        }
    }
    return printf("%d",count);
}
int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    prime(arr,a);
    return 0;
}