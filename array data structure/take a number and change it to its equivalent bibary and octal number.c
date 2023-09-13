#include<stdio.h>
void main()
{
    int a=0,i,n,b[20],o[20],bi=0,j,k,l;
    printf("\n Enter the number");
    scanf("%d",&n);
    a=n;
    i=0;
    while(n!=0)
    {
        b[i]=n%2;
        n=n/2;
        i++;
    }
    bi=a;
    k=0;
    while(a!=0)
    {
        o[k]=a%8;
        a=a/8;
        k++;
    }
    printf("\n the binary number of %d is",bi);
    for(j=i-1;j>=0;j--)
    {
        printf("%d",b[j]);
    }
     printf("\n the octal number of %d is",bi);
    for(l=k-1;l>=0;l--)
    {
        printf("%d",o[l]);
    }


}
