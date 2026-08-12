//Q6: Write a program to swap two numbers using a third variable
#include <stdio.h>
int main()
{
    int a;
    int b;
    int swap;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number to swap:");
    scanf("%d",&b);
    swap=a;
    a=b;
    b=swap;
    printf("After swapping, first number=%d\n",a);
    printf("After swapping,second number=%d\n",b);
     return 0;
}
