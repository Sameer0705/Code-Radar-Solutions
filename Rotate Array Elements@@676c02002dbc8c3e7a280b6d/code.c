#include <stdio.h>

int main() {
    int a,arr[100],b,temp;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&b);
    // for(int j=0;j<=a-2;j++)
    // {
    //     int temp =arr[a-1];
        for(int i=0;i<=a-2;i++)
        {
            temp=arr[0];
            arr[i]=arr[i+1]
            arr[i+1]=temp;
        }
    // }  
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}