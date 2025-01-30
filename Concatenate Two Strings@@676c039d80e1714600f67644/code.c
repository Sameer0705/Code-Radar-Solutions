#include <stdio.h>
#include <string.h>

int main() {
    char str1[500],str2[100];
    scanf("%s\n%s",&str1,&str2);
    str1=strcat(str1,str2);
    printf("%s",str1);
    return 0;
}