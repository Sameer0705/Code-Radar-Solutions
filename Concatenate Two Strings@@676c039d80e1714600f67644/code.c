#include <stdio.h>
#include <string.h>

int main() {
    char str1[500];
    scanf("%[^\n]s",str1);
    int str2[100];
    scanf("%[^\n]s",str2);
    printf("%s",strcat(str1,str2));
    return 0;
}