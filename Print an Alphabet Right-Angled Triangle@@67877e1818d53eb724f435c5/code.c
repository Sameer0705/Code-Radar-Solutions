#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    for(char s='A';s<=a;s++)
    {
        for(char w='A';w<=s;w++)
        {
            printf("%c",w);
        }
        printf("\n");
    }
    return 0;
}