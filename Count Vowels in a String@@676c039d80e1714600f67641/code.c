#include <stdio.h>

int main() {
    char name[100];
    int count=0;
    scanf("%s",name);
    for(int i=0;name[i] !='\0';i++)
    {
        if(name[i] == 'a'|| name[i] == 'i'|| name[i] == 'u'|| name[i] == 'e'|| name[i] == 'o'|| name[i]=='A'||name[i]=='I'|| name[i]=='U'||name[i]=='E'||name[i]=='O')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}