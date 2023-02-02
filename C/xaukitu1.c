#include<stdio.h>
#include<string.h>
int main ()
{
 char xau1[50],xau2[50],*s;
 gets(xau1);
 char ch='u';
// scanf("\n");
char *res;
 res=strchr(xau1,ch);
 puts(res);
}
