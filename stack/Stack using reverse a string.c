#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
char stack[max];
 int top=-1;
void push(char item)
{
if(top==max-1)
{
printf("overflow");


}
else
{
top++;
stack[top]=item;

}


}
  void pop()
{
char k='@';
if(top==-1)
printf("underflow");
else
{
k=stack[top];
top--;



}

printf("%c",k);



}
void main()
{
char s[23],ch;
int i,l;
printf("enter the string:");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{

push(s[i]);

}
printf (" the reverse string is:");
for(i=0;i<l;i++)
{
pop();



}







}
