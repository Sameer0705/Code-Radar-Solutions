#include <stdio.h>

int main() {
    char s;
    scanf("%d",&s);
    switch(s)
    {
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'c':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
    }
    return 0;
}