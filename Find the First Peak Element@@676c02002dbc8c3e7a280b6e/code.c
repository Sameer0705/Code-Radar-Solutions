#include <stdio.h>

int peak(int arr[], int a)
{
    for(int i=1;i<=a-1;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
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