#include<stdio.h>
#include<stdlib.h>
void heapsort(int [],int);
void buildmaxheap(int [],int);
void maxheapify(int [],int,int);
void main()
{
    int i,r ,heapsize,n;
    int a[50];
    printf("\n How many elements user want to insert :");
    scanf("%d",&n);
    printf("\n Enter the elements one by one:");
    for(i=0;i<n;i++)
    {
        printf("Enements-[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n The unsorted array is:");
     for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    heapsize=n-1;
    heapsort(a,heapsize);
    printf("\n The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

}
void heapsort(int a[],int heapsize)
{
    int i,temp;
    buildmaxheap(a,heapsize);
    for(i=heapsize;i>0;i--)
    {
        temp=a[i];
        a[i]=a[0];
        a[0]=temp;
        heapsize--;
        maxheapify(a,0,heapsize);

    }

}
void buildmaxheap(int a[],int heapsize)
{
    int i;
    for(i=heapsize/2;i>=0;i--)
    {
        maxheapify(a,i,heapsize);
    }

}
void maxheapify(int a[],int i,int heapsize)
{
    int temp,largest;
    int l=(2*i)+1;
     int r=(2*i)+2;
     if((l<=heapsize) && (a[l]>a[i]))
     {
         largest=l;
     }
     else
        largest=i;
      if((r<=heapsize) && (a[r]>a[largest]))
     {
         largest=r;
     }
    if(largest!=i)
     {
         temp=a[i];
         a[i]=a[largest];
         a[largest]=temp;
          maxheapify(a,largest,heapsize);
     }
}
