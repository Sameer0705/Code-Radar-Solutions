#include <stdio.h>

int main() {
    int a,rem=0,place=1,bin=0,;
    scanf("%d",&a);
    while(a>0)
    {
        rem=a%2;
        a=a/2;
        bin=bin+(rem*place);
        place=place*10;
    }
    while(bin>0)
    {
        b=bin%10;
        sum=sum+b;
        bin=bin/10;
    }
    
    return 0;
}