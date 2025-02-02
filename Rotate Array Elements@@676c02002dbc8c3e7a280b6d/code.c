#include <stdio.h>

int main() {
    int a,arr[100],b,temp;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&b);
    temp=arr[a-1];
    for(int i=a-2;i>=0;i--)
    {
        arr[a-1]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}