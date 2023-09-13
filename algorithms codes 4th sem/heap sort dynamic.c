#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void main()
{
    system("color 17");
    int i,r ,heapsize,n,*a;
    void heapsort(int*,int), buildmaxheap(int *,int),maxheapify(int *,int,int);
    printf("\n How many elements user want to insert :");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\n Enter the elements one by one:");
    for(i=0;i<n;i++)
    {
        printf("Elements-[%d]",i);
        scanf("%d",a+i);
    }
    printf("\n The unsorted array is:");
     for(i=0;i<n;i++)
    {
        printf("\t %d",*(a+i));
    }
    heapsize=n-1;
    heapsort(a,heapsize);
    printf("\n The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("\t %d",*(a+i));
    }

}
void heapsort(int *a,int heapsize)
{
    void buildmaxheap(int *,int),maxheapify(int *,int,int);
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
void buildmaxheap(int *a,int heapsize)
{
 void   maxheapify(int *,int,int);
    int i;
    for(i=heapsize/2;i>=0;i--)
    {
        maxheapify(a,i,heapsize);
    }

}
void maxheapify(int *a,int i,int heapsize)
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

