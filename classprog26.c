#include <stdio.h>
int main()
{
    int i=0,n; //variable declaration
    printf("Enter the n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //for loop for digits
    {
        printf("%d\n",i );
    }
    return 0;
}