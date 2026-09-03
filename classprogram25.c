#include <stdio.h>
int main()
{
    int a,b; //variable declaration
    char op;
    printf("Enter two numbers");
    scanf("%d %d", &a , &b);
    printf("Enter operator");
    scanf(" %c",&op);
    switch(op) //switch case for different operators
    {
        case '+':
        printf("Result=%d", a+b);
        break;
        case '-':
        printf("Result=%d",a-b);
        break;
        case '*':
        printf("Result=%d",a*b);
        break;
        case '%':
        if(b!=0) //special case
        printf("Result=%d",a%b);
        else
     printf("Cannot be divided by zero");
        break;
        case '/':
        if(b!=0)
     printf("Result=%d",a/b);
        else
     printf("Cannot be divided by zero");
        break;
        default:
        {
            printf("Wrong input");
            break;
        }
    }
    return 0;
}