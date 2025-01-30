#include <stdio.h>

int main() {
    int a,b,c,d,sum=0,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        d=b;
        while(b>0)
        {
            c=b%10;
            sum=(sum*10)+c;
            b=b/10;
        }
        printf("%d ",sum);
        // if(d==sum)
        // {
        //     count+=1;
        // }
    }
    // printf("%d",count);
    return 0;
}