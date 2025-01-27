#include <stdio.h>

int main() {
    int a,arr[100],max;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int j=1;j<a;j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
        }
    }
    printf("%d",max);

    return 0;
}