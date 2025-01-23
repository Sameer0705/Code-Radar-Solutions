#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    ((a+b)>c)?printf("valid"):printf("Invalid");
    return 0;
}