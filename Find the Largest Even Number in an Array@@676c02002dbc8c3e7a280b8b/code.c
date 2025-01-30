#include <stdio.h>

int main() {
    int a,b,arr[100],count=0,large;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            
            arr[i]=b;
        }
        // else
        // {
        //     count=count+1;
        // }
    }
    // if(count==a)
    // {
    //     printf("-1");
    // }
    // else
    // {
    large=arr[0];
    for(int i=0;i<a;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("%d",large);
    // }
    
    return 0;
}