#include <stdio.h>

int main() {
    char ch;
    scanf("%d",&ch);
    (ch>=97 && ch<=112)?printf("Lowercase"):printf("Uppercase");
    return 0;
}