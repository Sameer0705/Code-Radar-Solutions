#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    (a>=97 && a<=122)?printf("Lowercase"):(a>=65&&a<=90)?printf("Uppercase"):printf("Not an alphabet");
    return 0;
}