#include <stdio.h>
#include <string.h>

int main() {
    char str1[500],str2[500];
    fgets(str1,500,stdin);
    fgets(str2,500,stdin);
    strcat(str1,str2);
    puts(str1);
    return 0;
}