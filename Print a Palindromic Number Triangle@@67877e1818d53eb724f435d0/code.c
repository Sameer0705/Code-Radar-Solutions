#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=a;j>i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        if(i!=1){
            for(int h=i-1;h>=1;h--)
        {
            
            printf("%d",h);
        }
        }
        printf("\n");
    }
    return 0;
}