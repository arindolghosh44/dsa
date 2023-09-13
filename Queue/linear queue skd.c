#include<stdio.h>
# define max 4
int q[max];
int r=-1;
int f=-1;
void enque(int a)
{
    if(r==max-1)
        printf("overflow");
    else if(f==-1 && r==-1)
    {

        f=r=0;
    q[r]=a;
    }
    else{
        r++;
        q[r]=a;
    }

}
void deque()
{
    int x;
    if(f==-1 && r==-1)
        printf("underflow condition");
    else if(r==f)
        r=f=-1;
        else
        {
            printf("the element deleted from queue is:");
            x=q[f];
            f++;
            printf("%d",x);

        }

}
void display()
{
    int i;
    if(f==-1 && r==-1)
        printf("the queue is empty");

    else {
            printf("the queue is;");
  for(i=f;i<=r;i++)
            printf(" %d",q[i]);
    }


}
void main()
{
int ch,x;
while(1)
{

    printf("\n 1.Enqueue \n 2.Dequeue \n 3. Dispaly \n4. exit\n enter your  choice");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("enter element to insert:");
        scanf("%d",&x);
        enque(x);
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
        printf("wrong entry");
    }
}

}
