#include <stdio.h>

int sorted(int arr[],int a)
{
    for(int i=1;i<a;i++)
    {
        if(arr[i-1]>arr[i])
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
        scanf("%d ",&a);
    }
    sorted(arr,a);
    return 0;
}