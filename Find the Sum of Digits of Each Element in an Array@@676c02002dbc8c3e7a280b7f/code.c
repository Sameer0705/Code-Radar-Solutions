#include <stdio.h>
int main() {
    int a,b,arr[100],sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        sum=0;
        while(b!=0){
            sum += b%10;
            b= b/10;
        }
        if(sum<0)
        {
            sum*=-1;
        }
        arr[i]=sum;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
