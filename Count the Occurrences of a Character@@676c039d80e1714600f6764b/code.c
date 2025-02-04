#include <stdio.h>

int main() {
    int count=0;
    char str[100],d;
    scanf("%s",str);
    scanf(" %c",&d);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==d)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}