#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=0;;i++)
    {
        if((a&(1<<i))==0)
        {
            printf("%d",i);
            break;

        }
        
    }
    return 0;
}