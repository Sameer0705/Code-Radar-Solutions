#include <stdio.h>
#include <string.h>
int main() {
    char ch[500];
    gets(ch);
    printf("%s",strrev(ch));
    return 0;
}