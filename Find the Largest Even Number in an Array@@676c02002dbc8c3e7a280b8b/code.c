#include <stdio.h>

int main() {
    int a,b,arr[],large=-1;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            arr[i]=b;
        }
    }
    for(int i=0;i<a;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("%d",large);
    
    return 0;
}