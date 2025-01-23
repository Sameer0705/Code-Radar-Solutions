#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    (a%5==0 && a%11==0)?printf("Divisible"):printf("Not Divisible");
    return 0;
}