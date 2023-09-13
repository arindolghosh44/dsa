#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * encode(char str[])
{
    int i,j=j=strlen(str);
    for(i=0;i<j;i++)
    {
        if(str[i]>=65 && str[i]<89 ||str[i]>=97 && str[i]<121)

            str[i]=str[i]+2;

        else if(str[i]==89)
            str[i]=='A';
             else if(str[i]==90)
            str[i]=='A'+1;
            else if(str[i]==121)
            str[i]=='a';
             else if(str[i]==122)
            str[i]=='a'+1;

    }
    return str;
}
char* decode(char str[]){
return str;
}
void main()
{
    int j;
    char str[100],s1[100];
    printf("\n Enter the string:");
    gets(str);

    strcpy(s1,str);
 printf("\n Original string:%s",str);
        printf("\n encoded string:%s",encode(str));
         printf("\n decoded  string:%s",decode(str));

}
