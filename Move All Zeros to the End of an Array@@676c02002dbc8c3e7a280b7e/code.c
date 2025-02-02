#include <stdio.h>

int main() {
    int a,arr[100],temp;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<a-1;j++)
    {
        for(int i=0;i<a-1;i++)
        {
            if(arr[i]==0)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}