#include <stdio.h>

int main() {
    long a,rem=0,bin=0,place=1;
    scanf("%ld",&a);
    while(a)
    {
        rem=a%2;
        a=a/2;
        bin=bin+(rem*place);
        place=place*10;

    }
    printf("%ld",bin);

    return 0;
}