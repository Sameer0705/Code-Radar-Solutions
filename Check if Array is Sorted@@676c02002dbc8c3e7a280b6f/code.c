#include <stdio.h>

int sorted(int arr[],int a)
{
    for(int i=0;i<a-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return printf("Not Sorted");
        }
    }
    return printf("Sorted");
}

int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d ",&arr[i]);
    }
    sorted(arr,a);
    return 0;
}