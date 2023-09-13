#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[100],i,j,n,max,min,t=0,prime[100],r=0;
    printf("\n Enter the size:");
    scanf("%d",&n);
    printf("\n Enter the data:");
    for(i=0;i<n;i++)
    {
        printf("elements-[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n  the data are:");
    for(i=0;i<n;i++)
    {

        printf(" %d",a[i]);
    }
    max=min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
t=0;

    for(j=2;j<a[i];j++)
    {
        if(a[i]%j==0)
            {
                t=1;
                break;
            }

    }
    if(t==0)
    {

        prime[r]=a[i];
        r++;
    }
    }
    printf("\n Th e maximum element is: [%d]",max);

     printf("\n Th e minimum element is: [%d]",min);
     printf("\n The prime numbers are:");
     for(i=0;i<r;i++)
     {
         printf("\t [%d]",prime[i]);
     }

}
