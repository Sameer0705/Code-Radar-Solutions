#include <stdio.h>
#include <string.h>
int main() {
    char ch[100];
    scanf("%[^\n]s",ch);
    for(int i=strlen(ch);i>=0;i--)
    {
        printf("%c",ch[i]);
    }
    return 0;
}