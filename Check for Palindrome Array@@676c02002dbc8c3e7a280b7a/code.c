#include <stdio.h>

int main() {
    int a,b,flag=0,arr1[100],arr2[100];
    scanf("%d\n",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        arr1[i]=b;
        arr2[(a-1)-i]=b;
    }
    for(int i=0;i<a;i++)
    {
        if(arr1[i]!=arr2[i])
        {
        flag=1;
        break;
        }
    }
    (flag==1)?printf("NO"):printf("YES");

    return 0;
}