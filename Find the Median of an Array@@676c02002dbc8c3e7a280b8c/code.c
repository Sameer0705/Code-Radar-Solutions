#include <stdio.h>

int main() {
    int a,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    (a%2!=0)?printf("%d",arr[a/2]):printf("%d",(arr[a/2]+arr[(a/2)+1])/2);
    return 0;
}