#include <stdio.h>
#include <string.h>
int main() {
    char str1[500],str2[500];
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    int a=strlen(str2);
    char temp;
    for(int i=a-1;i<0;i++)
    {
        temp=str2[a];
        str2[a]=str2[i];
        str2[i]=temp;
        
    }
    (str1==str2)?printf("Yes"):printf("No");
    return 0;
}