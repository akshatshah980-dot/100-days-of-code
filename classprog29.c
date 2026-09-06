#include <stdio.h>
int main()
{
    int n,i=0; //variable declaration
    long f=1;
    printf("Enter the n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //for loop for factorial
    {
        f=f*i; //factorial calculation
    }
    printf("Factorial = %ld",f);
    return 0;
}