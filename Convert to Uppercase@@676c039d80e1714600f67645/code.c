#include <stdio.h>

int main() {
    char ch[100];
    gets(ch);
    printf("%s",strupr(ch));
    return 0;
}