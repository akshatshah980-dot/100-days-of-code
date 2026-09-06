#include <stdio.h>
int main()
{
    int i=0,n,sum; //variable declaration
    printf("Enter the n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //for loop for sum
    {
        if(i%2!=0) //condition for odd numbers
        {
            sum+=i;
        }
    }
    printf("Sum is: %d", sum);
    return 0;
}