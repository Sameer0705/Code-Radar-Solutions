#include <stdio.h>

int main() {
    int a,rem;
    scanf("%d",&a);
    while(a>=0)
    {
        rem=a%2;
        a=a/2;
        printf("%d",rem);
        // bin=bin+(rem*place);
        // place=place*10;
    }
    // printf("%d",bin);

    return 0;
}