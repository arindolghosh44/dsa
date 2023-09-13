#include<stdio.h>
typedef struct node
{
    int data;
    struct node*next;
}cust;
cust*f=0;
cust*r=0;
void enque(int x)
{
    cust*n;
    n=(cust*)malloc(sizeof(cust));
    n->data=x;
    n->next=0;
    if(f==0 && r==0)
        f=r=n;
        /*else if(f==-1 && r==-1)
    {

        f=r=0;
    q[r]=a;
    }
    else{
        r++;
        q[r]=a;
    }

}*/
else
{
    r->next=n;
    r=n;
}
}
void deque()
{
    cust*temp;
    temp=f;
    if(f==0 && r==0)
        printf("Underflow");
    /* if(f==-1 && r==-1)
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
*/
else if(f==r)
    f=r=0;
else{
        printf(" %d",f->data);
f=f->next;
free(temp);
}





}
void display()
{
    cust*temp;
 if(f==0 && r==0)
        printf("Underflow");
        else{
            temp=f;
            while(temp!=0)
            {
                printf(" %d",temp->data);
                temp=temp->next;
            }




        }
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
