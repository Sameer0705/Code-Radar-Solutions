#include <stdio.h>
#include <string.h>

int main() {
    char str1[100],str2[100],a;
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    printf("%s",strcat(str1,str2));
    return 0;
}