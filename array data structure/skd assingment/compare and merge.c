#include<stdio.h>
#include<stdlib.h>
//here also given only sorted array
void main()
{
    int a[20],b[89],m,n,i,pos,c[34],k,j,p;
    printf("enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element:[%d]",i);
        scanf("%d",&a[i]);
    }
     printf("\n element of first arrays is:");
     for(i=0;i<n;i++)
    {

        printf(" %d",a[i]);
    }
     printf(" \n enter the size of the  second array:");
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        printf("element:[%d]",j);
        scanf("%d",&b[j]);
    }
     printf("\n element of second arrays is:");
     for(j=0;j<m;j++)
    {

        printf(" %d",b[j]);
    }
for(i=0,j=0,k=0;i<n &&j<m;)
    {
        if (a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;

        }

        else
        {
            c[k]=b[j];
            k++;
            j++;

        }


    }
    while(i<n)
    {
         c[k]=a[i];
         k++;
         i++;
    }
    while(j<m)
    {
         c[k]=b[j];
         k++;
         j++;
    }

    printf(" \n The new array list is:");
    for(p=0;p<n+m;p++)
    {
        printf(" %d",c[p]);
    }
}

