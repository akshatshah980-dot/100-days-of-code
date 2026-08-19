/*ASCII code the computers cannot store symbols or letters directly they only understand numbers.
The ASCII standards solve this by mapping 128 charcters inculding letters ,digit,punctuations and control commands to
specific integers ranging from 0 to 127,when you declare a character variable in c the memory actually stores the integers
ASCII value rather then the character shape itself.The digits from 0-9 are stored int the 48-57, The uppercase letters from A-Z are stored in range
65-90.The lower case letters a-z are stored in range 97-122 ,the space charcter have an ASCII value 32.You can view the visual character by %c or the 
numerical code using %d that treats the variable as a decimal integer.*/
#include <stdio.h>  
int main ()
{
    char ch;
    printf("Enter a charcter");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("Uppercase alphabets");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("lowercase alpabets");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("It is a digit");

    }
    else
    {
        printf("Special charcter");
    }
    return 0;
}