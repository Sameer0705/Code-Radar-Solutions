#include <stdio.h>
void mindiff(int arr[],int a)
{
    int temp;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if((arr[0]-arr[1])<(arr[a-2]-arr[a-1]))
    {
        printf("%d %d",arr[a-1],arr[a-2]);
    }
    else
    {
        printf("%d %d",arr[1],arr[0]);
    }
}
int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    mindiff(arr,a);
    return 0;
}