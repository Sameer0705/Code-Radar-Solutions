#include <stdio.h>
#include <string.h>
int main() {
    char str1[500],str2[500],b=0;
    scanf("%[^\n]*s",str1);
    for(int i=strlen(str1)-1;i>=0;i--)
    {
        str2[b]=str1[i];
        b++;
    }
    (str1==str2)?printf("Yes"):printf("No");
    return 0;
}