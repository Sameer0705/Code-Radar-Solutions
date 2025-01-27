#include <stdio.h>

int main() {
    int a,b,odd=0,even=0;
    scanf("%d\n",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    printf("%d %d",even,odd);

    return 0;
}