#include <stdio.h>

int main() {
    int a,arr[100],b,arr1[200],c=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<;j++)
        {
            if((arr[i]+arr[j])==b)
            {
                arr1[c]=arr[i];
                arr1[c+1]=arr[j];
                c=c+2;
            }
        }
    }
    for(int i=0;i<c/2;i++)
    {
        printf("%d %d\n",arr1[i*2],arr1[i*2+1]);
    }
    return 0;
}