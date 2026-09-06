#include <stdio.h>
int main()
{
    int n,pro=1,digi; //VARIABLE DECLARATION
    printf("Enter a number");
    scanf("%d", &n);
    while(n!=0)
    {
        digi=n%10;
        if(digi%2!=0) //CONDITION TO CHECK ODD DIGITS
        {
            pro*=digi; //PRODUCT OF ODD DIGITS
        }
        n=n/10;
        
    }
    printf("The product is= %d", pro);
    return 0;
}