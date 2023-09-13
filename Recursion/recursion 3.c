#include<stdio.h>
int FIB(int n)
{
if(n==0)
    return 0;
else if(n==1)
    return 1;
    else
        return (FIB(n-1)+FIB(n-2));
}
void main()
{
    int n,b=0,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("the fibonnaci series   is ");
    for(i=0;i<=n;i++)
      printf(" %d",FIB(b++));
}
