#include <stdio.h>
#include <string.h>

int main() {
    char str1[100],str2[100],a[500];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    a=strcat(str1,str2);
    printf("%s",a);
    return 0;
}