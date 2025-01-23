#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    ((a>0 && b>0)||(a<0&&b<0))?printf("Same Sign"):printf("different Sign");
    return 0;
}