#include <stdio.h>

int main() {
    double a,rem=0,place=1;
    double bin=0;
    scanf("%lf",&a);
    while(a>0)
    {
        rem=a%2;
        a=a/2;
        bin=bin+(rem*place);
        place=place*10;

    }
    printf("%.lf",bin);

    return 0;
}