#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            (j==i||j==a||j==1)?printf("*"):printf(" ");

        }
        printf("\n")
    }
    return 0;
}