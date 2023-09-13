#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 20
int a[20];
int mergesort(int low ,int high)
{
    int mid;
    if(low!=high)
    {
        mid=(low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
        merge(low,mid,high);
    }
}
int merge(int low ,int mid ,int high)
{
    int temp[max];
    int i=low;
    int j=mid+1;
    int k=low;
    while((i<=mid)&& (j<=high))
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=mid)
    {
         temp[k++]=a[i++];
    }
    while(j<=high)
    {
      temp[k++]=a[j++];
    }
    for(i=low;i<=high;i++)
    {
        a[i]=temp[i];
    }

}
void main()
{
    int i,n;
    printf("\n Enter how many elements you want to insert:");
    scanf("%d",&n);
    printf("\n Enter the elements one by one:");
    for(i=0;i<n;i++)
    {
        printf("Enter elements [%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Unsorted list is:");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    mergesort(0,n-1);
    printf("\n Sorted list is:");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);

    }
}
