#include <stdio.h>
#include <string.h>
int main() {
    char ch[500];
    fgets(ch,500,stdin);
    printf("%s",strrev(ch));
    return 0;
}