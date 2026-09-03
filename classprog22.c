#include <stdio.h>
int main()
{
    float cp,sp,p,l,per; //variable declaration
    printf("Enter cost price and selling price");
    scanf("%f %f", &cp ,&sp);
    if(sp>cp) //profit calculation
    {
        p=sp-cp;
        per=(p/cp)*100;
        printf("The profit is %.2f and profit percentage is %.2f",p,per);
    }
    else if(cp>sp) //loss calculation
    {
        l=cp-sp;
        per=(l/cp)*100;
        printf("The loss is %.2f and loss percentage is %.2f",l,per);
    }
    else
    {
        printf("No profit no loss"); //no profit no loss
    }
    return 0;


    }

