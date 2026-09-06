#include <stdio.h>
int main()
{
    int n,sum; //VARIABLE DECLARATION
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1; i<=n/2;++i)
    {
        if(n%i==0) //TO CALCULATE FACTORS
        {
            sum+=i;
        }
    }
    if(sum==n) //CONDITION FOR PERFECT NUMBER
    {
        printf("Perfect");
    }
    else
    {
        printf("Not perfect");

    }
    return 0;

}