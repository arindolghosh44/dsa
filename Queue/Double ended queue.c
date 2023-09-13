#include<stdio.h>
#define N 50
int deq[N];
int f=-1;
int r=-1;
void enquefront(int x)
{
    if((f==0 && r==N-1) || (f==r+1))
        printf("the queue is full");
    else if(f==-1 && r==-1)
        {
        printf("Queue is empty");
    f=r=0;
    deq[f]=x;
        }
    else if(f==0){
        f=N-1;
       deq[f]=x;
    }
    else{

        f--;
           deq[f]=x;

    }


}
void enquerear(int x)
{
      if((f==0 && r==N-1) || (f==r+1))
        printf("the queue is full");
    else if(f==-1 && r==-1)
        {
        printf("Queue is empty");
    f=r=0;
    deq[r]=x;
        }
        else if(r==N-1)
        {
            r=0;
            deq[r]=x;

        }
        else{
            r++;
             deq[r]=x;
        }
}
void display()
{
    int i=f;
    while(i!=r)
    {
        printf(" %d",deq[i]);
        i=(i+1)%N;
    }
    printf(" %d",deq[r]);
}
void dequefront()
{
    if(f==-1 && r==-1)
        printf("The queue is empty");
    else if(f==r)
        f=r=-1;
    else if(f==N-1)
    {
        printf(" The deque element is %d",deq[f]);
        f=0;
    }
    else{
        printf(" The deque element is %d",deq[f]);
        f++;

    }
}
void dequerear()
{
   if(f==-1 && r==-1)
        printf("The queue is empty");
    else if(f==r)
        f=r=-1;
    else if(r==0)
    {
        printf(" The deque element is %d",deq[r]);
        r=N-1;
    }
    else{
        printf(" The deque element is %d",deq[r]);
    r--;

    }
}
void main()
{
    int ch,x,y;
    while(1)
    {
        printf(" \n 1.Enquefront \n 2. Enquerear \n 3. dequefront \n 4.dequerear \n 5. display \n ");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf(" \n  enter the data:");
            scanf("%d",&x);
            enquefront(x);
            break;
        case 2:
             printf(" \n enter the data:");
            scanf("%d",&y);
            enquerear(y);
            break;
        case 3:
            dequefront();
            break;
        case 4:
            dequerear();
            break;
        case 5:
            display();
            break;
        default:
            printf(" \n wrong");

        }
    }

}
