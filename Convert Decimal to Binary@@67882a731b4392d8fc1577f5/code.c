#include <stdio.h>

int main() {
    unsigned int a,rem=0,bin=0,place=1;
    scanf("%u",&a);
    while(a>0)
    {
        rem=a%2;
        a=a/2;
        bin=bin+(rem*place);
        place=place*10;

    }
    printf("%u",bin);

    return 0;
}