#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void shellsort(int a[],int n)
{
    int i,j,gap,temp;
    for(gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            temp=a[i];
            for(j=i;j>=gap && a[j-gap]>temp;j-=gap)
                a[j]=a[j-gap];
            a[j]=temp;
        }
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
        scanf("%d",&a[i]);

    }
    printf("\n the original array is:");
     for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);

    }
    shellsort(a,n);
    printf("\n The sorted array is:");
         for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);

    }



}
