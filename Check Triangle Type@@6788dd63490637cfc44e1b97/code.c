#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a==b==c)?printf("equilateral"):(a!=b!=c):printf("Scalene"):printf("Isosceles");
    return 0;
}