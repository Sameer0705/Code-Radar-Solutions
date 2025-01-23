#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    (a>=90)?printf("A"):(90>a&&a>=80)?printf("B"):(80>a&&a>=70)?printf("C"):(70>a&&a>=60)?printf("D"):printf("F");
    return 0;
}