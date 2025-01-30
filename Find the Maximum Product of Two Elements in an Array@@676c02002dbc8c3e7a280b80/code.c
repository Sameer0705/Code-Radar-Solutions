#include <stdio.h>

int main() {
    int a,arr[100],arr1[200],count=0,max;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            arr1[count]=arr[i]*arr[j];
            count++;
        }
    }
    
    max=arr1[0];
    for(int i=1;i<count;i++)
    {
        if(max<arr1[i])
        {
        max=arr1[i];
        }
    }
    printf("%d",max);
    return 0;
}