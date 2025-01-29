#include <stdio.h>

int main() {
    int a,b,arr1[100],arr2[100];
    scanf("%d\n",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        arr1[i]=b;
        arr2[(a-1)-i]=b;
    }
    (arr1[a-1]==arr2[a-1])?printf("YES"):printf("NO");
    return 0;
}