#include <stdio.h>
int main()
{
    int n,sum=0,digi,og,fact=1; //VARIABLE DECLARATION
    printf("enter a number");
    scanf("%d",&n);
    og=n;

    while(n!=0)
    {
        digi=n%10;
        for(int i=1;i<=digi;++i)
        {
            fact=fact*i; //FACTORIAL CALCULATION

        }
        sum+=fact;
        n=n/10;
        fact=1;

    }
    if(sum==og) //CONDITION FOR STRONG NUMBER
    {
        printf("Strong");
    }
    else
    {
        printf("Not strong");
    }
    return 0;
}