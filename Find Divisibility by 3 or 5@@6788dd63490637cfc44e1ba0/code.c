#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    (a%3==0 && a%5==0)?printf("Divisible by both"):(a%3==0)?printf("Divisible by 3"):(a%5==0)?printf("Divisible by 5"):printf("Not Divisible");
    return 0;
}