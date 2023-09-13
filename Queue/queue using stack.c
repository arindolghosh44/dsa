#include<stdio.h>
#define N 30
int top1=-1;
int top2=-1;
int count=0;
int s1[N],s2[N];
void enque(int x)
{
    push1(x);
    count++;
}
void push1(int x)
{
    if(top1==N-1)
        printf("Queue overflow");
    else
    {
        top1++;
        s1[top1]=x;

    }
}
void push2(int x)
{
    if(top2==N-1)
        printf("Queue overflow");
    else
    {
        top2++;
        s2[top2]=x;

    }
}
void deque()
{
    int b,i;
    if(top1==0  &&  top2==0)
        printf("Queue is underflow");
    else{
        for(i=0;i<count;i++)
        {
            push2(pop1());
        }
        printf("The deleted element from the queue is:");
        b=pop2();
        printf("%d",b);


    }
    count--;
    for(i=0;i<count;i++)
        push1(pop2());
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}
void display()
{
    int i;
    for(i=0;i<=top1;i++)
        printf(" %d",s1[i]);
}
void main()
   {
       int ch,da;
       while(1)
       {
           printf("\n Enter your choice:");
           scanf("%d",&ch);
           switch(ch)
           {
           case 1:
            printf("\n Enter data:");
            scanf("%d",&da);
            enque(da);
            break;
           case 2:
            deque();
            break;
           case 3:
            display();
            break;
           case 4:
            exit(1);
           default:
            printf("\n wrong Entry");
           }
       }
   }
