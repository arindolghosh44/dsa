#include<stdio.h>
int EXP(int a,int b)
{
if(b==0)
    return 1;
else
    return a*EXP(a,b-1);
}
void main()
{
    int a,b,value;
    printf("enter the value of a and b=");
    scanf("%d %d",&a,&b);
    value=EXP(a,b);
    printf("the Exponent  value of %d and %d is %d",a,b,value);
}
