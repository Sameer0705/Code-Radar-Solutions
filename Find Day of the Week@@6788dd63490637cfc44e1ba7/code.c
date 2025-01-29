#include <stdio.h>

int main() {
    int a;
    char *s[150]={"MOnday","Tuesday","Wednesday"};
    scanf("%d",&a);
    printf("%s",s[a-1]);
    return 0;
}