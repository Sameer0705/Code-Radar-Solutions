#include <stdio.h>

int repeat(int arr[],int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                return printf("%d",arr[i]);
            }
        }
    }
    return printf("-1");
}

int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    repeat(arr,a);
    return 0;
}