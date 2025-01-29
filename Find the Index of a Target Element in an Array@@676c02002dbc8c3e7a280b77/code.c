#include <stdio.h>

int main() {
    int a,arr[100],b,j,flag=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(j=0;j<a;j++)
    {
        if(arr[j]==b)
        {
            flag=1;
            break;
        }
    }
    (flag==1)?printf("%d",j):printf("%d",-1);
    return 0;
}