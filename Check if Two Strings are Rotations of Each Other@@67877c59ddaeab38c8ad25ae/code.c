#include <stdio.h>
#include <string.h>
int main() {
    char str1[500],str2[500];
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    int b=strlen(str1);
    int a=strlen(str2);
    int flag=0;
    for(int j=0;j<b;j++)
    {
        for(int i=0;i<a;i++)
        {
            temp=str2[0];
            str2[0]=str[i];
            srt2[i]=temp;
        }
        if(str1=str2)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    (flag==1)?printf("Yes"):printf("No");
    return 0;
}