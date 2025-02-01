#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    (ch>='1' && ch<='9')?printf("Digit"):(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||vh=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E')?printf("Vowel"):(ch >='a' && ch<='z')?printf("Consonant"):printf("Special Character");
    return 0;
}