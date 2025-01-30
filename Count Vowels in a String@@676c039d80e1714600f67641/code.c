#include <stdio.h>

int main() {
    char name[100];
    int count=0;
    fgets(name,100,name);
    for(int i=0;name[i]='\0';i++)
    {
        if(name[i]=='a'||name[i]=='i'||nmae[i]=='u'||name[i]=='e'||name[i]=='o')
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}