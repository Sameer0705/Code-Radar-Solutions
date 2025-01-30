#include <stdio.h>
#include <string.h>

int main() {
    char str1[500],str2[100];
    fgets(str1,500,stdin);
    fgets(str2,100,stdin);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}