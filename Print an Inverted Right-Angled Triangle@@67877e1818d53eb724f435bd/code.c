#include <stdio.h>

int main() {
    int a,i=1;
    scanf("%d",&a);
    for (i=1;i<=a:i++){
        for(int j=a;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}