#include<stdio.h>
int main ()
{
    int n,dau,j,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
      {
          if (i %2 ==0)
             dau=2;
        else
           dau=1;
        for(j=1; j<=i; j++)
          {
              printf("%d",dau);
              dau=dau+2;
          }
        printf("\n");
      }
}