#include<stdio.h>
#include<string.h>
int check(char ch)
{
    if (ch=='2' || ch=='4' || ch=='6' || ch=='8' || ch=='0')
       return 1;
    else
       return 0;
}
void xuli(char a[1000])
{
    int i,n;
    n=strlen(a);
    int check1=1;
    for(i=0;i<=(int )n/2; i++ )
      {
          if ((a[i]!=a[n-i-1]) || (check(a[i])==0) || (check(a[n-i-1])==0))
                {
                    check1=0;
                    break;
                }
      }
    if (check1)
       printf("YES\n");
    else
      printf("NO\n");
}
int main ()
{
    int i,t;
    scanf("%d",&t);
    scanf("\n");
    char xau[1000];
    for(i=0; i<t; i++)
      {
          gets(xau);
          xuli(xau);
      }
}