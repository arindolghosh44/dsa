#include<stdio.h>
#include<stdlib.h>
#define max 5
int qu[max],pr[max];
int r=-1,f=-1;
void enque(int data,int p)
{
    int i;
    if((f==0)&& (r==max-1))
        printf("\n Queue overflow");
    else
    {
        if(f==-1)
        {
            f=r=0;
            qu[r]=data;
            pr[r]=p;
        }
        else if(r==max-1)
        {
            for(i=f;i<=r;i++)
            {
                qu[i-f]=qu[i];
                pr[i-f]=pr[i];
                r=r-f;
                f=0;
                for(i=r;i>f;i--)
                {
                    if(p>pr[i])
                    {
                        qu[i+1]=qu[i];
                        pr[i+1]=pr[i];
                    }
                    else
                    {
                        break;
                        qu[i+1]=data;
                        pr[i+1]=p;
                        r++;
                    }
                }
            }
        }
        else
        {
            for(i=r;i>=f;i--)
            {
                if(p>pr[i])
                {
                    qu[i+1]=qu[i];
                    pr[i+1]=pr[i];
                }
                else
                    break;

            }
              qu[i+1]=data;
                        pr[i+1]=p;
                        r++;

        }
    }
}
int deque()
{
    if(f==-1)
    {
        printf("\n The queue is underflow");
    }
    else
    {
        printf("\n The deleted element is %d \t and its priority is %d ",qu[f],pr[f]);
        if(f==r)
            f=r=-1;
        else
            f++;
    }
}
void dis()
{
    int i;
    for(i=f;i<=r;i++)
    {
        printf("\n element=%d \t priority=%d",qu[i],pr[i]);
    }

}






void main()
{
    int ch,i,n,data,p;
    do
    {
        printf("\n 1.Enqueue \n 2. Dequeue \n 3. Display \n 4. Exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n Enter how many number you want to insert:");
            scanf("%d",&n);
            printf("\n Enter your data and their priority:");
            for(i=0;i<n;i++)
            {
                scanf("%d %d",&data,&p);
                enque(data,p);
            }
            break;
        case 2:
            deque();
            break;
        case 3:
            dis();
            break;
        case 4:
            exit(0);
        default:
            printf("\n Wrong entry");
        }
    }while(ch!=0);
}
