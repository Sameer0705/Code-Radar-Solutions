#include <stdio.h>

int main() {
    int a,b,arr[100],sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        sum=sum+b;
        arr[i]=sum;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}