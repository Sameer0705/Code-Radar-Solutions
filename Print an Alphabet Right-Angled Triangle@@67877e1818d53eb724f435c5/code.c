#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int s=1;s<=a;s++)
    {
        char a='A';
        for(char w=1;w<=s;w++)
        {
            printf("%c ",a);
            a=a+1;

        }
        printf("\n");
    }
    return 0;
}