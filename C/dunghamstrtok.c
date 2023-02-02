#include<stdio.h>
#include<string.h>
int main ()
{
    char xau[]="Ho Va Ten Trinh Vinh Tuan Dat";
    char *p;
    const char s[10] =" ";
    p=strtok(xau,s);
    while (p!=NULL)
      {
        printf("%s\n",p);
        p=strtok(NULL,s);
      }
    puts(xau);
}