#include <stdio.h>

int smallest(int arr[],int a)
{
    int smallest=arr[0],sec_smallest = -1;
    for(int i=0;i<a;i++)
    {
        if(arr[i]<smallest)
        {
            sec_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<sec_smallest && arr[i]!=smallest)
        {
            sec_smallest=arr[i];
        }
    }
    return printf("%d",sec_smallest);
}

int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    smallest(arr,a);
    return 0;
}