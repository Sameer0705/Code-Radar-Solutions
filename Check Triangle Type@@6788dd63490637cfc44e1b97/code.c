#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a==b&&a==c&&b==c)?printf("Equilateral"):(a!=b&&a!=c&&b!=c)?printf("Scalene"):printf("Isosceles");
    return 0;
}