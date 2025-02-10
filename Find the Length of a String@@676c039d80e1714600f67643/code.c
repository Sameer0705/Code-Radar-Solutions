#include <stdio.h>
#include <string.h>
int main() {
    char str1[500];
    scanf("%[^\n]s",str1);
    getchar();
    int length=strlen(str1);
    (str1[500]=='    ')?printf("0"):printf("%d",length);
    return 0;
}