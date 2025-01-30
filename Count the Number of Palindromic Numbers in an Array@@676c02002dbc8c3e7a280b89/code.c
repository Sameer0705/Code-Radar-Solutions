#include <stdio.h>

int main() {
    int a,b,c,d,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        d=b;
        while(b>0)
        {
            c=b%10;
            sum=sum+c;
            b=b/10;
        }
        if(b==sum)
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}