#include<stdio.h>
#define MAX 100
 typedef struct cust
{
    char name[24];
    char aadhar[24];
    char contact[24];
    char city[24];

}N;
int f=MAX-1;
int r=MAX-1;
int fl=0;
int c=0;
N cust[MAX];

void enque()
{
    if(f==r && fl==1)
    {
        printf("Queue overflow");
        return;
    }
    else{
        printf("NAME :");
        gets(cust[c].name);
        printf("aadhar no :");
        gets(cust[c].aadhar);
        printf("Mobile no :");
        gets(cust[c].contact);
        printf("CITY :");
        gets(cust[c].city);
        r=(r+1)%MAX;
        cust[r]=cust[c];
        fl=1;
        c++;

    }

}
N deque()
{

    if(f==r && fl==0)
    {
        printf("Queue underflow");
        return;
    }
    else{
        f=(f+1)%MAX;
        f=0;
        return cust[f];

            }

}
void display()
{

    if(f==r && fl==0)
    {
        printf("No element to display");
        return;
    }
    printf("the data in this queue is:");
    int i;
    for(i=(f+1)%MAX;;i=(i+1)%MAX)
    {
        printf("NAME: %s\n",cust[i].name);
        printf("AADHAR: %s\n",cust[i].aadhar);
        printf("MOBILE: %s\n",cust[i].contact);
        printf("CITY: %s\n",cust[i].city);
        if(i==r)
            break;

    }
}
void main()
{
    while(1)
    {
        int ch;
        N temp;
        printf("\n enter \n 1.Insert \n 2.Disbursed \n 3.Display the details\n4.exit");
        scanf("%d",&ch);
        fflush(stdin);
        switch(ch)
        {
        case 1:
            printf("enter the data:");
            enque();
            break;
            case 2:
            temp=deque();
            printf("\n item disbursed :%s",temp.name);
            break;
            case 3:
        display();

            break;
            case 4:

            exit(0);
            break;
            default:
                break;
        }
    }
}
