#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        char s='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c ",s);
            s=s+1;
        }
        printf("\n");
    }
    
    return 0;
}