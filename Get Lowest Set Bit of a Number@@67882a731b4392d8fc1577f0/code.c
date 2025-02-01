#include <stdio.h>
int main() {
    int a,b=0;
    scanf("%d",&a);
    while(a>0)
    {
        if(a&1==1)
        {
            printf("%d",b);
        }
        a>>=1;
        b++;
    }
    return 0;
}