#include<stdio.h>
#include<windows.h>
void KNAP(int n,float weight[],float profit[],float capacity)
{
    float x[20],temp=0;
    int i,j,u;
    u=capacity;
    for(i=0;i<n;i++)
        x[i]=0.0;
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
            break;
        else
        {
            x[i]=1.0;
            temp+=profit[i];
            u=u-weight[i];
        }
    }
    if(i<n)
    {
        x[i]=u/weight[i];
    }
    temp=temp+x[i]*profit[i];
    printf("\n the result vector is:");
    for(i=0;i<n;i++)
        printf("%f \t",x[i]);
    printf("\n the minimum profit: %f",temp);
}
void main()
{
    float profit[20],weight[23],capacity;
    int num,i,j;
    float ratio[20],temp;
    system("color 03");
    printf("\n Enter the no of object:");
    scanf("%d",&num);
    printf("\n enter the weight and profit of each object:");
    for(i=0;i<num;i++)
    {
        scanf("%f %f",&weight[i],&profit[i]);
        Beep(750,800);
    }
    printf("\n Enter the capacity of knapsack:");
    scanf("%f",&capacity);
    for(i=0;i<num;i++)
    {
        ratio[i]=profit[i]/weight[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;
                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;
                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;

            }
        }

    }
    KNAP(num,weight,profit,capacity);
}
