#include <stdio.h>
int main()
{
    char ch; // VARIABLE TO STORE A CHARACTER
    printf("Enter a character");
    scanf("%c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') //CHECK FOR VOWEL
    {
        printf("It is a vowel");
        
    }
    else
    {
        printf("It is a consonant");
    }
    return 0;
}