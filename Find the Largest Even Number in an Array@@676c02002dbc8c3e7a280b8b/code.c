#include <stdio.h>

int main() {
    int a,b,arr[100],large;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            arr[i]=b;
        }
    }
    if(arr[]==0)
    {
        printf("-1");
    }
    else
    {
        arr[0]=large;
    for(int i=1;i<a;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("%d",large);
    }
    return 0;
}