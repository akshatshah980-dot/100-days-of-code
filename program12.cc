//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer");
    scanf("%d",&n);
    if(n>0)
    {
        printf("It is a positive number");
    
    }
    else if (n<0)
    {
        printf("It is a negative number");
}
else 
{
    printf("It is zero");
}
return 0;
}
