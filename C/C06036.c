#include<stdio.h>
#include<string.h>
int  main ()
{
    char xau[10000];
    gets(xau);
    int d;
    d=strlen(xau)-1;
    printf("%d",d);
}