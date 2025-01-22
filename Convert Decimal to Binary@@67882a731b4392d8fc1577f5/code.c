#include <stdio.h>

int main() {
    int a,rem=0,bin=0,place=1;
    scanf("%d",&a);
    while(a)
    {
        rem=a%2;
        a=a/2;
        bin=bin+(rem*place);
        place=place*10;

    }
    printf("%d",bin);

    return 0;
}