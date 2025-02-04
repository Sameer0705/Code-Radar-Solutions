#include <stdio.h>

int main() {
    char ch[100];
    scanf("%[^\n]s",ch);
    printf("%s",strupr(ch));
    return 0;
}