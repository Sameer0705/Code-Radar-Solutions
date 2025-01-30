#include <stdio.h>
int main() {
    int a,b,arr[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        int c,sum=0;
        while(b>0){
            c=b%10;
            sum=sum+c;
            b=b/10;
        }
        arr[i]=sum;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}