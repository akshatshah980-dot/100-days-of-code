#include <stdio.h>
int main()
{
    long binary,digit,result=0,place=1; //VARIABLE DECLARATION
    printf("Enter a binary number\n");
    scanf("%ld", &binary);
    while(binary>0)
    {
        digit=binary%10;
        if(digit==1)
        {
            result=result+0*place; //REPLACING 1 WITH 0
        }
        else
        {
            result=result+1*place; //REPLACING 0 WITH 1
        }
        place =place*10;
        binary=binary/10;
    }
    printf("The complement is= %d", result);
    return 0;
}