#include <stdio.h>

int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++)
    {
        int count=0;
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",arr[i]);
        }
        
    }
    printf("%d",arr[a-1]);
    return 0;
}