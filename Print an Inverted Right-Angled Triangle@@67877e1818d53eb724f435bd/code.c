#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a:i++){
        for(int j=a;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}