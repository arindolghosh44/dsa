#include <stdio.h>
void main()
{
    int a[20],n,i,pos,item;
    printf("enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element:[%d]",i);
        scanf("%d",&a[i]);
    }
     printf("arrays is:");
     for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

printf(" \n enter the location in where you want to insert:");
scanf("%d",&pos);
printf("enter the element you want to insert");
scanf("%d",&item);
for(i=n-1;i>=pos-1;i--)
{
    a[i+1]=a[i];


}
a[pos-1]=item;

     printf("element of arrays is:");
 for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }

}
