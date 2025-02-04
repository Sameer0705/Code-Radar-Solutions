#include <stdio.h>

int main() {
    char ch[100];
    fgets(ch,100,stdin);
    printf("%s",strupr(ch));
    return 0;
}