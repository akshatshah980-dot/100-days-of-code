#include <stdio.h>
#include <math.h>
int main()
{
    int n,last,first,og,c=0; //VARIABLE DECLARATION
    printf("Enter a number");
    scanf("%d", &n);
    og=n;
    last=n%10;
    while(n!=0)
    {
        c++;
        n=n/10;

    }
    int multiplier=pow(10,c-1);
    first=og/multiplier;
    int swapped = og;
    swapped=swapped-(multiplier*first)+(multiplier*last); //swapping first with last
    swapped=swapped-last+first;
    printf("The result is=%d",swapped);
    return 0;
}