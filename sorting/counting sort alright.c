#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void countingsort(int a[],int n)
{
    int i,b[n],max;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
   int  count[max+1];
    for(i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    //update the count array
    for(i=1;i<=max;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    //finding the index of each element
    for(i=n-1;i>=0;i--)
    {
        b[--count[a[i]]]=a[i];
    }
    //copy array a to array b
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }

}
void main()
{
    system("color 09");
    int a[20],i,n,b[20],c[30];
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    printf("\n Enter the data :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//1,1,3,4,5,3,2,4,5,9(like repeating word)

    }
    printf("\n the original array is:");
     for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);

    }
    countingsort(a,n);
    printf("\n The sorted array is:");
         for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);

    }



}
