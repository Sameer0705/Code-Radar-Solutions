#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='1' && ch<='9')
    {
    printf("Digit");
    }
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||vh=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E')
    {
    printf("Vowel");
    }
    else if((ch >='a' && ch<='z')||(ch>='A' &&ch<='Z'))
    {
        printf("Consonant");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}