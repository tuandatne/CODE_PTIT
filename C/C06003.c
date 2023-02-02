#include<stdio.h>
#include<string.h>
void xuly(char a[])
{
    int i;
    int dem=0;
    char ch[3]=" ";
    strcat(a,ch);
    for(i=0; i<strlen(a); i++)
      if (a[i]!=' ' && a[i+1]==' ')
         dem++;
    printf("%d\n",dem);
}
int main ()
{
    int i,t;
    char a[1000];
  scanf("%d",&t);
  for(i=0; i<t; i++)
     {
         scanf("\n");
         gets(a);
         xuly(a);
     }  
}