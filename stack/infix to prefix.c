#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
int top;
char item[max];
int pr(char,char);
void push(char);
char pop();
int isalpha(char);
int isdigit(char);
void main( )
{
int i,j=0,flag=1;
char p[max],post[max],h,k;
top=-1;
push('(');
printf("enter the infix expression:");
gets(p);
strrev(p);
strcat(p,')');
for(i=0;p[i]!='\0';i++)
{
    if(p[i]=='(')
        push('(');
    else if(isalpha(p[i])|| isdigit(p[i]))
        post[j++]=p[i];
    else if(p[i]==')')
    {
        do
        {
            h=pop();
            if(h!='(')
                post[j++]=h;
        }
        while(h!='(');
    }
    else if(p[i]=='+' || p[i]=='-' ||p[i]=='*' |p[i]=='/' ||p[i]=='^')
    {
        while(flag)
        {


        if(pr(item[top],p[i]))
            post[j++]=pop();

            else
                flag=0;
        }
        push(p[i]);
        flag=1;

    }


    }
    post[j]='\0';
    printf("The equivalent infix expression is:");
    puts(strrev(post));




}
 void push(char x)
{

    if(top==max-1)
        printf("overflow");
    else
    {
        top++;
    item[top]=x;
    }
}


char pop()
{
    char x='@';
    if(top==-1)
        printf("underflow");
    else
{


    x=item[top];
    top--;
}
    return (x);
}
int isdigit(char b)
{
    if(b>='0' && b<='9')
        return 1;
    else
        return 0;




}
int isalpha(char b)
{
    if(b>='a' && b<='z')
        return 1;
        if(b>='A' && b<='Z')
        return 1;
    else
        return 0;




}
int pr(char a,char b)
{
    if(a=='(')
        return 0;
    else if (a==b)
        return 1;
    else if((a=='-' && b=='*')|| (a=='+' && b=='*')||(a=='-' && b=='/')||(a=='/' && b=='^'))
        return 0;
    else if((a=='-' && b=='^')|| (a=='+' && b=='^')||(a=='*' && b=='^')||(a=='/' && b=='^'))
        return 0;
        else
            return 1;

}
