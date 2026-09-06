#include <stdio.h>
int main()
{
    int n,rev=0,k; //variable declaration
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0) //while loop to calculate reverse
    {
        k=n%10;
        rev=rev*10+k; //to get the reverse of the number
        n=n/10;
    }
    printf("The reverse is: =%d", rev);
    return 0;
}