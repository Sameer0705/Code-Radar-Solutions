#include <stdio.h>

int main() {
    float a,b;
    char s;
    scanf("%f %f %c",&a,&b,&s);
    switch(s)
    {
        case '+':
        printf("%.f",a+b);
        break;
        case '-':
        printf("%.f",a-b);
        break;
        case '*':
        printf("%.f",a*b);
        break;
        case '/':
        printf("%.f",a/b);
        break;
        default:
        printf("Error in case of any error");
    }
    return 0;
}