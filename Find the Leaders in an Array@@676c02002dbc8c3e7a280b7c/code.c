#include <stdio.h>

int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            printf("%d ",arr[i]);
        }
    }
    printf("%d",arr[a-1]);
    return 0;
}