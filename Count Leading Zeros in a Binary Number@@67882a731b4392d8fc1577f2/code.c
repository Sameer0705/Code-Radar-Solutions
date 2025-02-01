#include <stdio.h>

int main() {
    unsigned int a,count=0;
    scanf("%u",&a);

        while(a!=0)
    {
        count+=1;
        a=a/2;
    }
    printf("%d",32-count);
    return 0;
}