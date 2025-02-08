#include <stdio.h>
int monotonic(int arr[] ,int a)
{
    if(arr[0]>arr[1])
    {
        for(int j=0;j<a-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                return printf("NO");
            }
        }
    }
    else if(arr[0]<arr[1])
    {
        for(int j=0;j<a-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                return printf("NO");
            }
        }
    }
    return printf("YES");
}
int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d ",&arr[i]);
    }
    monotonic(arr,a);
    return 0;
}