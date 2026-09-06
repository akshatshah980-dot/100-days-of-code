#include <stdio.h>
int main()
{
    int n,flag=1; //VARIABLES TO INPUT THE VALUE AND CHECK
    printf("Enter the number");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Not a prime number");
    }
    for(int i=2; i<=n/2; i++) //LOOP TO CHECK PRIME
    {
       if(n%i==0)
       {
        flag=0;
       }

    }
    if(flag==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");

    }
    return 0;


}