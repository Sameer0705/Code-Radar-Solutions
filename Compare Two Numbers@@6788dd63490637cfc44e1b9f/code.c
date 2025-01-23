#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    (a>b)?printf("First"):(a<b)?printf("Second"):printf("Equal");
    return 0;
}