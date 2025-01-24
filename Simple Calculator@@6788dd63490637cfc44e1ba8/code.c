#include <stdio.h>

int main() {
    int a,b;
    char s;
    scanf("%d %d",&a,&b);
    scanf("%c",&s);
    switch('s')
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("error");
    }
    return 0;
}