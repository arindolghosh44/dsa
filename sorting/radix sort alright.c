 #include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void countsort(int a[],int n,int exp)
{
    int count[20]={0},i,b[20];
    for(i=0;i<n;i++)
    {
        count[(a[i]/exp)%10]++;

    }
    for(i=1;i<=n;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[count[(a[i]/exp)%10]-1]=a[i];
        count[(a[i]/exp)%10]--;
    }
     for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }


}
void radixsort(int a[],int n)
{
    int max=a[0],exp,i;
        for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(exp=1;max/exp>0;exp=exp*10)
    {
        countsort(a,n,exp);
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
        scanf("%d",&a[i]);//123,345,120(similar range)

    }
    printf("\n the original array is:");
     for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);

    }
    radixsort(a,n);
    printf("\n The sorted array is:");
         for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);

    }



}
