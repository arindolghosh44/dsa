#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 56
long int stack[MAX];
int top=-1;
char p[MAX];
//231*+9- check this result is -4
void push(long int item)
{
    if(top==MAX-1)
        printf("overflow");
    else
    {
        top++;
        stack[top]=item;
    }
}

long int pop()
{

    if(top==-1)
        printf("underflow");
    else
    {
        return stack[top--];

    }

}
long int eval(char p[])
{
    int i;
    long int result,b,a,val;
    for(i=0; p[i]!='\0'; i++)
    {
        if(p[i]<='9' && p[i]>='0')
            push(p[i]-48);//also start with 0 because ascii value of 0 is 48
        else
        {
            a=pop();
            b=pop();
            switch(p[i])
            {
            case '+':
                val=b+a;
                break;
            case '-':
                val=b-a;
                break;

            case '*':
                val=b*a;
                break;

            case '/':
                val=b/a;
                break;


            }
            push(val);


        }

    }
    result=pop();
    return result;
}
void main()
{
    char ch='y';
    int i;
    long int value;
    while(ch=='y')
    {

        printf("enter your string with right parenthesis:");
        fflush(stdin);
        gets(p);
        value=eval(p);
        printf("the value of the expression is:%ld\n",value);
        printf("\n want to continue:");
        scanf("%c",&ch);
    }
}
