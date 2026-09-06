#include <stdio.h>
int main()
{
    int n,rev,c ,og; //variables to store the number and its reverse
    printf("Enter the number");
    scanf("%d",&n);
    og=n;
    while(n!=0)
    {
        c=n%10;
        rev =rev*10+c;
        n=n/10;
    }
    if(og==rev)
    {
        printf("It is a palindrome");
        
    }
    else
    {
        printf("It is not a palindrome");

    }
    return 0;
}