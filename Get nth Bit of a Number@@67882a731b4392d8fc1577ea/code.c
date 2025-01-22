#include <stdio.h>

int main() {
    int a,b,rem=0,place=1,bin=0,c;
    scanf("%d %d",&a,&b);
    // while(a)
    // {
    //     rem=a%2;
    //     a=a/2;
    //     bin=bin+(rem*place);
    //     place=place*10;
    // }
    // printf("%d",bin);

    c=((a>>b) &1)
    printf("%d",c)
    return 0;
}