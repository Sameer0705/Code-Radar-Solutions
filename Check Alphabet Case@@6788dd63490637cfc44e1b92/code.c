#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    (a>=97 && a<=122)?printf("Lowercase"):printf("Uppercase");
    return 0;
}