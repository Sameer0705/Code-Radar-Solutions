#include <stdio.h>

int main() {
    int a,arr[100],large,seclarge;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    seclarge=arr[1];
    for(int i=0;i<a;i++)
    {
        if(arr[i]>large)
        {
            seclarge=large;
            large=arr[i];
        }
        else if(arr[i]>seclarge && arr[i]!=large)
        {
            seclarge=arr[i];
        }
    }
    (seclarge==large ||a==1)?printf("-1"):printf("%d",seclarge);
    return 0;
}