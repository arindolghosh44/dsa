#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void factor(int n);
void prmfactor(int n);
int factorial(int n);
int checkprime(int n);
int checkfibo(int n);
int arm(int n);
int perfect(int n);

void main()
{
    int num,flag;
    printf("\n Enter the number:");
    scanf("%d",&num);
    printf("\n Factor of the %d number is",num);
    factor(num);
    printf("\n  prime Factor of the %d number is ",num);
    prmfactor(num);
    printf("\n Factorial of the %d number is %d",num,factorial(num));
    flag=checkprime(num);
    if(flag==1)
        printf("\n %d is prime number",num);
    else
    printf("\n %d is not  prime number",num);
    flag=checkfibo(num);
    if(flag==1)
        printf("\n %d is fibbonacci number",num);
    else
    printf("\n %d is not  fibbonacci number",num);
    flag=arm(num);
    if(flag==1)
        printf("\n %d is armstrong number",num);
    else
    printf("\n %d is not  armstrong number",num);
        flag=perfect(num);
    if(flag==1)
        printf("\n %d is perfect number",num);
    else
    printf("\n %d is not  perfect number",num);

}
void factor(int n)
{
    int i,result;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("\t %d",i);
    }

}
void prmfactor(int n)
{
    int i,c=0,j;
    for(i=1;i<=n;i++)
    {
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            c++;
    }
    if(c==0)
        printf("\t %d",i);
    }
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;

    }
     return f;

}
int checkprime(int n)
{
    int i,flag=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;

}

int checkfibo(int n)
{
    int s,flag;
    s=sqrt(n);
   if(s*s==n)
    flag=1;
   else
    flag=0;

    return flag;
}
int arm(int n)
{
    int or,rev,c=0,flag,r;
    double result=0.0;
    or=n;
    while(or!=0)
    {
        or/=10;
        c++;
    }
    or=n;
    while(or!=0)
    {
        rev=or%10;
        result+=pow(rev,n);
        or/=10;
    }
    if(result==r)
        flag=1;
    else
        flag=0;
    return flag;

}
int perfect(int n)
{
    int i,sum,num,flag;
    sum=0,num=n;
    for(i=1;i<=n;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    if (sum==n)
    {
        flag=1;

    }
    else flag=0;
    return flag;
}

