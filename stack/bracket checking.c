#include<stdio.h>
#include<string.h>
#define MAX 30
int stack[MAX];
int top=-1;

void push(int item)
{
  if(top==MAX-1)
    printf("overflow");
  else{
    top++;
    stack[top]=item;
  }
}
int pop()
{
    int k=-402;
    if(top==-1)
        printf("underflow");
    else{
        k=stack[top--];
    }
    return (k);
}
int check(char ch,char ch2)
{
    if(ch=='(' && ch2==')')
        return 1;
         else if(ch=='[' && ch2==']')
        return 1;
         else if(ch=='{' && ch2=='}')
        return 1;
        else
            return 0;

}
void main()
{
    int i,l,v;
    char s[67],ch,ch2;
    printf("enter the combination:");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        ch=s[i];
        if(ch=='[' ||ch=='{' ||ch=='(')
            push(ch);
        else if(ch=='}' ||ch==']' ||ch==')')
        {
            ch2=pop();
            v=check(ch2,ch);
            if(v==0)
                break;
        }
    }
    if(v==0)
        printf("wrong arrangement");
    else
        printf("correct order");
}
