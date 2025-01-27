#include <stdio.h>

int main() {
    int a,arr[100],odd=0,even=0;
    scanf("%d\n",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<a;j++)
    {
        (arr[j]%2==0)?even=even+1:odd=odd+1;
    }
    printf("%d %d",even,odd);

    return 0;
}