#include <stdio.h>

int main() {
    int a,bin=0,rem=0,place=1,b;
    scanf("%d",&a);
    // while(a){
    //     rem=a%2;
    //     a=a/2;
    //     bin=bin+(rem*place);
    //     place=place*10;
    // }
    // printf("%d",&bin);
    b=a>>31;
    (b&1)?printf("Set"):printf("Not Set");
    return 0;
}