#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[100];
    int c;
    scanf("%s %d\n%s",&a,&c,&b);
    printf("Name: %s\nAge: %d\nHobby: %s",a,c,b);
    return 0;
}