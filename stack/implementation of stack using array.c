#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
 int top=-1;
void push(int item)
{
if(top==max-1)
printf("overflow");
else
{
top++;
stack[top]=item;
}
}
int pop()
{
int k=-402;
if(top==-1)
{
printf("underflow");
}
else
{
k=stack[top];
top--;

}
return(k);



}

void peak()
{

if(top==-1)
{
printf("stack is empty");
}
else
{
printf("\n%d",stack[top]);

}

}

void display()
{
int i;
for(i=top;i>=0;i--)
printf("\n%d",stack[i]);



}
void main()
{
int k,p,ch;
while(1)
{
    printf("\n 1.push operation \n 2.pop operation \n 3. peak opeartion \n 4.displaying our stack elements \n 5.exit \n Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter the element you want to insert in the stack:");
        scanf("%d",&k);
        push(k);
        break;
    case 2:
        p=pop();
        printf("the pop out element of the stack is:%d",p);
        break;
    case 3:
        peak();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(1);
    default:
        printf("wrong entry");

    }
}


}











