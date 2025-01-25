#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    (a==1||3||5||7||8||10||12)?printf("%d",31):(a==2)?printf("%d",28):printf("%d",30);
    return 0;
}