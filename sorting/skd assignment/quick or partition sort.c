#include<stdio.h>
#include<stdlib.h>
#define max 50
int a[20];
void quicksort(int f ,int l)
{
    int pivot,j,temp,i;
    if(f<l)
    {
        pivot=f;
        i=f;
        j=l;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<l)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(f,j-1);
        quicksort(j+1,l);
    }

}
void main()
{
    int n,i;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    printf("\n Enter the elements one by one:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    quicksort(0,n-1);
    printf("\n The sorted elements in ascending order:");
     for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);

    }

}
