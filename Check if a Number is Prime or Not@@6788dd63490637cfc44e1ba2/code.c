#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    (a%1==0&&a%a==0)?printf("Prime"):printf("Not Prime");    
    return 0;
}