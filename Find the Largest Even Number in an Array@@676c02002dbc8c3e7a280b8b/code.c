#include <stdio.h>

int main() {
    int a,b,arr[],large;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            arr[i]=b;
        }
    }
    large=arr[0];
    for(int i=1;i<a;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("%d",large);
    
    return 0;
}