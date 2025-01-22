#include <stdio.h>
#include<string.h>
int main() {
    char a[100],b[100];
    int c;
    scanf("%s %d\n%s",&a,&b,&c);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
    return 0;
}