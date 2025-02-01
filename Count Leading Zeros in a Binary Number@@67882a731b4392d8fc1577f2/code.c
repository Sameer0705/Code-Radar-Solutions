#include <stdio.h>

int main() {
    int a,count=0;
    scanf("%d",&a);
    if(a==4294967295)
    {
        printf("0");
    }
    else
    {
        while(a!=0)
    {
        count+=1;
        a=a/2;
    }
    printf("%d",32-count);
    }
    return 0;
}