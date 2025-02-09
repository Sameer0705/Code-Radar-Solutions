#include <stdio.h>

void greatest(int arr[],int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                arr[i]=arr[j+1];
            }
        }
    }
    arr[a-1]=-1;
}
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    greatest(arr,a);
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}