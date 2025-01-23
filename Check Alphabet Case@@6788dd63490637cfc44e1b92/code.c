#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    (a>="a" && a<="z")?printf("Lowercase"):printf("Uppercase");
    return 0;
}