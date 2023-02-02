#include<stdio.h>
#include<string.h>
void xuli(char a[1000])
{
    long i,n,s=0;
    n=strlen(a);
    int check=1;
    for(i=0;i<(int)n/2; i++ )
      {
         if (i == n-i-1)
            s=s+(int) a[i]-48;
          else
            s=s+(int) a[i]+(int) a[n-i-1] - 96;
        if (a[i]!=a[n-i-1])
                {
                    check=0;
                    break;
                }
      }
    if (check==0)
       printf("NO\n");
    else
       {
        if ( s % 10 == 0)   
           printf("YES\n");
        else
        printf("NO\n");
       }
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
        if (xau[0]!='8' || xau[strlen(xau)-1] !='8')
          printf("NO\n");
        else
          xuli(xau);
      }
}