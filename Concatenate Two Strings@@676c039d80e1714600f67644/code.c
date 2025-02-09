#include <stdio.h>
#include <string.h>

int main() {
    char str1[100],str2[100],a;
    scanf("%[^\n]c",&str1);
    scanf("%[^\n]c",str2);
    printf("%s",strcat(str1,str2));
    return 0;
}