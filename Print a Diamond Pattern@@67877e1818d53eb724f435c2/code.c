#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=a;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int f=1;f<=a-1;f++)
    {
        for(int g=a-1;g>=1;g++)
        {
            printf(" ");

        }
        for(int h=1;h<=(2*f-1);f++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}