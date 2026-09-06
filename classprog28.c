#include <stdio.h>
int main()
{
    int n,i=0; //variable declaration
    long pro=1;
    printf("Enter the n");
    scanf("%d",&n);
    for(i=1;i<=n;++i) //for loop to calculate product
    {
        if(i%2==0) // condition for even numbers
        {
            pro*=i;
        }
    }
    printf("product is:%ld", pro);
    return 0;
}