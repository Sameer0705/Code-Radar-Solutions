#include <stdio.h>
#include <string.h>
int main() {
    char str1[500],str2[500];
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    int b=strlen(str1),a=strlen(str2),count=0;
    for(int j=0;j<b;j++)
    {
        for(int i=0;i<a;i++)
        {
            if(str1[j]==str2[i])
            {
                count++;
                break;
            }   
        }
    }
    (b==count)?printf("Yes"):printf("No");
    return 0;
}