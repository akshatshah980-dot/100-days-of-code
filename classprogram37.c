#include <stdio.h>
int main()
{
    int n,sum,og,digi,cube; //VARIABLE DECLARATION
    printf("Enter the number");
    scanf("%d", &n);
    og=n;
    while(n!=0) //LOOP TO CHECK ARMSTRONG
    {
        digi=n%10;
        cube=digi*digi*digi;
        sum+=cube;
        cube=0;
        n=n/10;     
    }
    if(sum==og) //CONDITION FOR ARMSTRONG
    {
        printf("Armstrong");
    
    }
    else 
    {
        printf("Not Armstrong");
    }
    return 0;
    
}