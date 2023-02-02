#include<stdio.h>
int main ()
{
    int n,i,j;
    scanf("%d",&n);
    printf("1\n");
    for(i=2; i<=n; i++)
      {
          int dau=i;
          printf("%d ",dau);
          int kc=n-1;
          for(j=2; j<=i; j++)
          {
              dau=dau+kc;
              printf("%d ",dau);
              kc--;
          }
        printf("\n");

      }
}