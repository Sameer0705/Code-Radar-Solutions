#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    while(a>=0)
    {
        printf("%d",a%2);
        a=a/2;
        // bin=bin+(rem*place);
        // place=place*10;
    }
    printf("\n");

    return 0;
}