#include <stdio.h>

int main() {
    char ch[100];
    scanf("%[^\n]s",ch);
    getchar();
    printf("%s",strupr(ch));
    return 0;
}