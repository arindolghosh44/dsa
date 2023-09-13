//#include<stdio.h>
typedef struct node{
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
    if(r==0)
    {
        f=r=n;
        r->next=f;
    }
    else{
        r->next=n;
        r=n;
        n->next=f;


    }
}
void deque()
{
    cust*temp;
    temp=f;
    if(f==0 && r==0)
        printf("Underflow");
        else if(f==r)
        {
            f=r=0;
            free(temp);
        }
    else{
             printf(" %d",f->data);
        f=f->next;
        r->next=f;
        free(temp);



    }
}
void display(){

cust*temp;
temp=f;
if(f==0 && r==0)
    printf("Queue is underflow");
else{
    while(temp->next!=f)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf(" %d",temp->data);

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
