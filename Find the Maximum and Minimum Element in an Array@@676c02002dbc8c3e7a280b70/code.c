#include <stdio.h>

int main() {
    int a,arr[100],max,min;
    scanf("%d\n",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int j=1;j<a;j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
        }
    }
    for(int i=1;i<a;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d %d",min,max);

    return 0;
}