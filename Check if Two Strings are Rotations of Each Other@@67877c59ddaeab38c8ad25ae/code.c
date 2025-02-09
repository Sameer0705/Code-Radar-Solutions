#include <stdio.h>
#include <string.h>
int main() {
    char str1[200],str2[200];
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s"str2);
    int a=strlen(str2);
    char temp;
    for(int i=0;i<a-1;i++)
    {
        temp=str2[i];
        str2[i]=str2[i+1];
        str2[i+1]=str2[i];
        
    }
    (str1==str2)?printf("Yes"):printf("No");
    return 0;
}