#include <stdio.h>   // LCM * HCF= A*B
int main()
{
    int a,b,re,pro,lcm;
    printf("Enter two numbers");
    scanf("%d %d", &a,&b);
    pro=a*b;
    while(b!=0)
    {
        re=a%b;
        a=b;
        b=re;
    }
    lcm=pro/a;
    printf("LCM is =%d", lcm);
    return 0;


}