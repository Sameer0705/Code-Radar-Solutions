#include <stdio.h>

int majority(int arr[],int a)
{
    int count=0,arr1[100],b=0,c;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
        {
            c=arr[i];
            count++;
        }
        }
        if(count==a/2)
        {
            b++;
        } 
    }
    if(b>1)
    {
        return printf("%d",c);
    }
    else
    {
        return printf("-1");
    }
}

int main() {
    int a,arr[];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    majority(arr,a);
    return 0;
}