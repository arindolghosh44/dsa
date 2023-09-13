#include<stdio.h>
int GCD(int a,int b)
{
if(a%b==0)
    return b;
else
    return GCD(b,a%b);
}
int FIB(int n)
{
if(n==0)
    return 0;
else if(n==1)
    return 1;
    else
        return (FIB(n-1)+FIB(n-2));
}
int fun(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fun(n-1));
}




void main()
{
    int ch,a,b,value,n,c=0,i,j,p,m;
    while(1)
    {
       printf("\n 1. Gcd finding \n 2. fibonacci series \n 3. factorial \n 4. exit \n Enter your choice");
       scanf("%d",&ch);
       switch(ch)
       {
       case 1:
    printf("enter the value of a and b=");
    scanf("%d %d",&a,&b);
    value=GCD(a,b);
    printf("the gcd value of %d and %d is %d",a,b,value);
    break;
       case 2:
            printf("enter the value of n:");
    scanf("%d",&n);
    printf("the fibonnaci series   is ");
    for(i=0;i<=n;i++)
      printf(" %d",FIB(c++));
      break;
       case 3:
           printf("\n Enter the number:");
           scanf("%d",&m);
           for(j=1;j<=m;j++)
           {
               p=fun(j);
           }
           printf("\n The factorial of this number is:%d",p);
           break;
       case 4:
        exit(1);
       default:
        printf("\n Wrong entry");

       }
    }
}
