#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    (a<b)?printf("Profit"):(a>b)?printf("Loss"):printf("No Profit No Loss");
    return 0;
}