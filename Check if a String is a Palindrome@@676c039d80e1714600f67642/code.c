#include <stdio.h>

int main() {
    char str1[500],str2[500];
    fgets(str1,500,stdin);
    str2=strrev(str1);
    ((str1==str2)==0)?printf("Yes"):printf("No");
    return 0;
}