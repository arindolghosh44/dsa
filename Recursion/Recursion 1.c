#include<stdio.h>
int GCD(int a,int b)
{
if(a%b==0)
    return b;
else
    return GCD(b,a%b);
}
void main()
{
    int a,b,value;
    printf("enter the value of a and b=");
    scanf("%d %d",&a,&b);
    value=GCD(a,b);
    printf("the gcd value of %d and %d is %d",a,b,value);
}
