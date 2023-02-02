#include<stdio.h>
#include<string.h>
int main ()
{
    char xau[10000];
    int dem1=0,dem2=0,dem3=0,d;
    gets(xau);
    char ch;
    for(int i=0; i<strlen(xau); i++)
       {
        ch=xau[i];
        d=(int) ch;
        if  (d<=90 && d>=65 || d>=97 && d<=122)
           dem1++;
        if (d>=48 && d<=57)
          dem2++;
       }
    dem3=strlen(xau)-dem1-dem2;
    printf("%d %d %d",dem1,dem2,dem3);
}