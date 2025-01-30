#include <stdio.h>
#include <string.h>

int main() {
    fgets(name,100,stdin);
    for(int i=(strlen(name)-1);i>=0;i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}