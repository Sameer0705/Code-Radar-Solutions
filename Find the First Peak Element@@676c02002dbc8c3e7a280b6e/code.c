#include <stdio.h>

int peak(int arr[], int a)
{
    for(int i=1;i<=a-1;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            return printf("%d",arr[i]);
            
        }
        else if(arr[a-1]>arr[a-2])
        {
            return printf("%d",arr[a-1]);
        }
    }
    return printf("-1");
}
int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    peak(arr,a);

    return 0;
}