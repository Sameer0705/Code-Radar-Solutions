#include <stdio.h>

int main() {
    int a,b,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int c,d,sum=0;
        scanf("%d",&b);
        d=b;
        while(b>0)
        {
            c=b%10;
            sum=(sum*10)+c;
            b=b/10;
        }
        
        if(d==sum)
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}