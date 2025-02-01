#include <stdio.h>

int main() {
    int a,b=0;
    scanf("%d",&a);
    while(a>0)
    {
        if(a&1==1)
        {
            break;
        }
        a=a>>1;
        b++;
    }
    printf("%d",b);
    return 0;
}