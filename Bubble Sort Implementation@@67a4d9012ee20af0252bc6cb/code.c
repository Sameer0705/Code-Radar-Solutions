#include <stdio.h>
void bubbleSort(int arr[],int a)
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
}
void printArray(int arr[],int a)
{
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}