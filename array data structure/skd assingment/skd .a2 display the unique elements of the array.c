#include <stdio.h>
void main()
{
    int a[20],temp,count=0,i,j,n;
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
    printf(" the unique element is/are:");
for(i=0;i<n;i++)
{
    count=0;
    for(j=0;j<n;j++)
    {

        if(a[j]==a[i])
        {

            count++;
        }
    }
    if(count==1)
    printf("%d",a[i]);

    }



}


