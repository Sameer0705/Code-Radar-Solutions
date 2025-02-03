#include <stdio.h>
#include <string.h>
int main() {
    int count=0;
    char str1[500];
    scanf("%[^\n]s",str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    printf("%d\n",count);
    return 0;
}