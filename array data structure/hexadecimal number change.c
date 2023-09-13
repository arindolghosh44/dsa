#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char check(int n)
{
    if(n==10)
        return 'A';
    else if(n==11)
        return 'B';
    else if(n==12)
        return 'C';
    else if(n==13)
        return 'D';
    else if(n==14)
        return 'E';
    else if(n==15)
        return 'F';
        else
            return n;



}


void main()
{
    int a=0,i,n,b[20],o[20],bi=0,j,k,l,p,m;
    char hex[30];
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
    m=bi;
    p=0;
    while(bi!=0)
    {
        hex[p]=(char)(check(bi%16));
        bi=bi/16;
        p++;
    }
    printf("\n the binary number of %d is",m);
    for(j=i-1;j>=0;j--)
    {
        printf("%d",b[j]);
    }
     printf("\n the octal number of %d is",m);
    for(l=k-1;l>=0;l--)
    {
        printf("%d",o[l]);
    }
    printf("\n the hexadecimal number of %d is",m);
    for(l=k-1;l>=0;l--)
    {
        printf("%d",hex[l]);
    }



}

