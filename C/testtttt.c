#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[10000],s2[10000];
    gets(s1);
    scanf("\n");
    gets(s2);
    while(strstr(s1,s2))
      {
          char *p=strstr(s1,s2);
         if (p)
           printf("%s\n",p);
 
          strcpy(strstr(s1,s2),strstr(s1,s2)+strlen(s2));
               }
    puts(s1);
}