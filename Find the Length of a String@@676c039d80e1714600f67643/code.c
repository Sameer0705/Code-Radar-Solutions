#include <stdio.h>
#include <string.h>
int main() {
    int count=0,i=0;
    char str1[500];
    scanf("%[^\n]s",str1);
    while(str1[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d\n",count);
    return 0;
}