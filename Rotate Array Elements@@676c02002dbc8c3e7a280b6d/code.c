#include <stdio.h>

int main() {
    int a,arr[100],b.temp;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<b;i++){for(int i=a-1;i>0;i-=2)
    {
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }}
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}