#include <stdio.h>

int main() {
    int a,arr[100],b,temp;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&b);
    for(int j=0;j<b;j++)
    {
        int last =arr[a-1];
        for(int i=a-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}