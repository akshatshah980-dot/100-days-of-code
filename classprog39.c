#include <stdio.h>
int main()
{
    int n; //VARIABLE DECLARATION
    printf("Enter a number");
    scanf("%d",&n);
    printf("Factors are:\n");
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)  //FACTOR CALCULATION
        {
            printf("%d \n",i);
        }
    }
    return 0;
}