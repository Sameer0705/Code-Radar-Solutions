#include <stdio.h>

int main() {
    char ch[500];
    scanf("%[^\n]s",ch);
    getchar();
    printf("%s",strupr(ch));
    return 0;
}