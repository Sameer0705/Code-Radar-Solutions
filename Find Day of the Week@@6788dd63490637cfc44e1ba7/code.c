#include <stdio.h>

int main() {
    int a;
    char *s[7]={"Monday","Tuesday","Wednesday,Thusday,Friday,Saturday,Sunday"};
    scanf("%d",&a);
    printf("%s",s[a-1]);
    return 0;
}