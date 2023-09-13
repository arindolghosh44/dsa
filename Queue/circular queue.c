#include<stdio.h>
#include<stdlib.h>
#define max 2
 int cq[max];
int f=-1;
int r=-1;
void enque(int a)
{
    if((r+1)%max==f)
        printf("Queue overflow");
    else if(f==-1 && r==-1)
    {
        f=r=0;
        cq[r]=a;
    }
    else
    {
        r=(r+1)%max;
        cq[r]=a;
    }

}
void deque()
{
    int a;
    if(f==-1 && r==-1)
        printf("Queue overflow");
    else if(f==r)
    {
        f=r=-1;

    }
    else
    {
        a=cq[f];
        f=(f+1)%max;

    printf("The deleted element is %d",a);
    }

}
void display()
{
    int i;
    if(f==-1 && r==-1)
        printf("the queue is empty");

    else {
    i=f;
    while(i!=r)
    {
        printf(" %d",cq[i]);
        i=(i+1)%max;
    }
    printf(" %d",cq[r]);
    }
}
void main()
{
    int ch,v;
    while(1)
    {
   printf("\n 1.enque \n 2. deque \n 3. display \n 4.exit \n Enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
    printf("Enter the value you want to insert:");
    scanf("%d",&v);
    enque(v);
    break;
   case 2:
    deque();
    break;
   case 3:
    display();
    break;
   case 4:
    exit(0);
   default:
    printf("galat ha");


   }
    }
}





