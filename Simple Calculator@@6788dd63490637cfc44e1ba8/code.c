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
        (b==0)?printf("Error"):printf("%.f",a/b);
        break;
        default:
        printf("Error");
    }
    return 0;
}